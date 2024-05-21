#include <algorithm>
#include <iomanip>
#include <cctype>
#include <iostream>
#include <fstream>
#include <random>
#include <list>
#include <chrono>
#include <thread>
#include <vector>
#include <string.h>
#include <locale.h>
#include <cstdlib>

using namespace std;

void wait(int sec){

	std::this_thread::sleep_for(std::chrono::seconds(sec));

};


class Person{
	public:
int HP;
int DEF;
int LEVEL;
string NOME;

void stats(){
cout << "Stats de " << NOME << endl;
cout << "HP: " << HP << endl;
cout << "DEF: " << DEF << endl;


};


//end of class person

};

class Player : public Person{
	public:
	int ATK1 = 3;
	int ATK2 = 5;
	Player(string NAME){
	NOME = NAME;
	LEVEL = 1;
	HP = 15 * LEVEL;
	DEF = 5 * LEVEL;
	};

	~Player(){
	cout << "VOCE MORREU!" << endl;
	};

	void cura(){
	cout << "voce se curou e recuperou 5 pontos de HP! " << endl;
	HP += 5;
	}

	int acoes(){
		int acao;
	cout << "voce tem as seguintes acoes disponiveis" << endl;
	cout << "1 - Ataque Fraco ( - 3HP )" << endl;
	cout << "2 - Ataque Forte ( -5 HP)" << endl;
	cout << "3 - Cura ( +5 HP)" << endl;
	cin >> acao;
	return acao;
	
	}

};

class Enemy : public Person{
	public:
	Enemy(string TYPE, int vida, int defes, int LV){
	NOME = TYPE;
	LEVEL = LV;
	HP = vida * LV;
	DEF = defes * LV;
	}

};


int main(){
Player* jogador = new Player("NULL");

cout << "Bem vindo jogador" << endl;
wait(1);
cout << "Qual seu nome?: ";
cin >> jogador->NOME;

cout << "Seja bem-vindo(a)!" << endl;
wait(.5);
cout << "Os seus stats são os seguintes: " << endl;
jogador->stats();
wait(.5);

bool jogando = true;

while (jogando == true){
int randomNumber = rand() % 4;

if (randomNumber == 0){
Enemy assasino = Enemy("Assasino", 5, 10, 1);
cout << "um assasino apareceu! " << endl;
wait(1);
while(assasino.HP > 0 || jogador->HP > 0){ 
assasino.stats();

int oquefez = jogador->acoes();

if (oquefez == 1){

cout << "voce usou seu ataque fraco!" << endl;
assasino.HP -= jogador->ATK1;


}else if(oquefez == 2){
cout << "voce usou seu ataque forte!" << endl;
assasino.HP -= jogador->ATK2;
wait(1);
}else if(oquefez == 3){
if(jogador->HP - 3 < jogador->HP){
cout << "voce se curou e recuperou 3 de HP!" << endl;
jogador->cura();
wait(1);
}else{
cout << "voce nao pode se curar agora!" << endl;
wait(1);
}
}
}
}
if(randomNumber == 1){

Enemy orc = Enemy("Orc", 10, 5, 1);
cout << "um orc apareceu!" << endl;

while(orc.HP > 0 || jogador->HP > 0){
orc.stats();
int oquefez = jogador->acoes();

if (oquefez == 1){
cout << "voce usou seu ataque fraco!" << endl;
orc.HP -= jogador->ATK1;
wait(1);
}
if(oquefez == 2){
cout << "voce usou seu ataque forte!" << endl;
wait(1);
orc.HP -= jogador->ATK2;
}
if(oquefez == 3 && jogador->HP - 3 > jogador->HP){
cout << "voce nao pode se curar agora!" << endl;
wait(1);
cout << "voce perdeu sua vez!" << endl;
}
if(oquefez == 3 && jogador->HP - 3 <= jogador->HP){
cout << "voce curou 3 de HP! " << endl;
jogador->cura();
wait(1);
}
}

}
}


cout << "presione ENTER para sair" << endl;
cin.ignore();
cin.get();
//end of main function
}

