#include <algorithm>
#include <iomanip>
#include <cctype>
#include <iostream>
#include <string.h>
#include <random>
#include <list>
#include <vector>
#include <locale.h>
#include <Windows.h>

using namespace std;

int randomNumber(int MaxNumber)
{
	int resultado = rand() % MaxNumber;
	return resultado;
}

void wait(int sec) { for (int i = 0; i < sec; i++)
{
	Sleep(1000);	
}
 }

class Player
{
public:
	int LVL = 1;
	int XP = 0;
	int HP = 15;
	int ATK = 5;
	int DEF = 5;
	vector<int> inventario;
	string NAME;

	Player(string NOME)
	{
		NAME = NOME;
	}

	~Player()
	{
		cout << "Voce morreu!" << endl;
	}

	void defesa()
	{
		HP = HP + (DEF - 3);
		cout << "voce defendeu e adicionou " << DEF - 3 << " pontos ao seu HP!" << endl;
	}

	void stats()
	{
		cout << NAME << " stats: " << endl;
		cout << "-----==========-----" << endl;
		cout << "LVL: " << LVL << endl;
		cout << "XP: " << XP << endl;
		cout << "HP: " << HP << endl;
		cout << "ATK: " << ATK << endl;
		cout << "DEF: " << DEF << endl;
		cout << "-----==========-----" << endl;
	}
};

class Wizard : public Player
{

public:
	int MANA;
	acoes(int mostrar)
	{
		if(mostrar == 0){
			cout << "voce tem as seguintes acoes disponiveis:" << endl;
		cout << "1. Bola de fogo - 7 Dano, 9 Mana" << endl;
		cout << "2. Relampago - 3 Dano, 4 Mana" << endl;
		cout << "3. Fugir" << endl;
		cout << "4. Usar Item" << endl;
		}else{
		int acao;
		cout << "voce tem as seguintes acoes disponiveis:" << endl;
		cout << "1. Bola de fogo - 7 Dano, 9 Mana" << endl;
		cout << "2. Relampago - 3 Dano, 4 Mana" << endl;
		cout << "3. Fugir" << endl;
		cout << "4. Usar Item" << endl;
		cin >> acao;

		if (acao == 1)
		{
			cout << "voce lança uma bola de fogo no inimigo e causa 7 de dano e usou 9 pontos de mana";
			MANA -= 9;
		}
		else if (acao == 2)
		{
			cout << "voce lança um relampago no inimigo causando 3 de dano e usando 4 pontos de mana! ";
			MANA -= 4;
		}
		else if (acao == 3)
		{
			cout << "voce tenta fugir" << endl;
		}
		else if (acao == 4)
		{
			for (int i = 0; i < inventario.size(), i++;)
			{
				cout << inventario[i] << endl;
			}
		}
		else
		{
			cout << "informe uma acao valida" << endl;
			system("CLS");
			acoes(1);
		}
		}
	}

	Wizard(string NOME) : Player(NOME)
	{
		NAME = NOME;
	};
};

class Warrior : public Player
{
public:
	int stamina = 12;

	Warrior(string NOME) : Player(NOME)
	{
		NAME = NOME;
	};
	acoes(int mostrar)
	{
		if (mostrar == 0){
			cout << "voce tem as seguintes acoes disponiveis:" << endl;
		cout << "1. Espadada - 4 Dano, 2 Stamina" << endl;
		cout << "2. Machado - 7 Dano, 7 Stamina" << endl;
		cout << "3. Fugir" << endl;
		cout << "4. Usar Item" << endl;
		
		}else{
		int acao;
		cout << "voce tem as seguintes acoes disponiveis:" << endl;
		cout << "1. Espadada - 4 Dano, 2 Stamina" << endl;
		cout << "2. Machado - 7 Dano, 7 Stamina" << endl;
		cout << "3. Fugir" << endl;
		cout << "4. Usar Item" << endl;
		cin >> acao;

		if (acao == 1)
		{
			cout << "voce ataca o inimigo com sua espada causando 4 de dano e usou 2 pontos de estamina";
			stamina -= 2;
		}
		else if (acao == 2)
		{
			cout << "voce ataca o inimigo com seu machado causando 7 de dano e usando 7 pontos de estamina! ";
			stamina -= 7;
		}
		else if (acao == 3)
		{
			cout << "voce tenta fugir" << endl;
		}
		else if (acao == 4)
		{
			for (int i = 0; i < inventario.size(), i++;)
			{
				cout << inventario[i] << endl;
			}
		}
		else
		{
			cout << "informe uma acao valida" << endl;
			system("CLS");
			acoes(1);
		}
		}
	}
};

class Archer : public Player
{
public:
	int Arrows = 12;

	Archer(string NOME) : Player(NOME)
	{
		NAME = NOME;
	};
	int acoes(int mostrar)
	{
		if (mostrar == 0)
		{
			cout << "voce tem as seguintes acoes disponiveis:" << endl;
			cout << "1. Espadada - 4 Dano, 2 Stamina" << endl;
			cout << "2. Machado - 7 Dano, 7 Stamina" << endl;
			cout << "3. Fugir" << endl;
			cout << "4. Usar Item" << endl;
			wait(2);
		}
		else
		{
			int acao;
			cout << "voce tem as seguintes acoes disponiveis:" << endl;
			cout << "1. Espadada - 4 Dano, 2 Stamina" << endl;
			cout << "2. Machado - 7 Dano, 7 Stamina" << endl;
			cout << "3. Fugir" << endl;
			cout << "4. Usar Item" << endl;
			cin >> acao;

			if (acao == 1)
			{
				cout << "voce ataca o inimigo com sua espada causando 4 de dano e usou 2 pontos de estamina";
				Arrows -= 2;
			}
			else if (acao == 2)
			{
				cout << "voce ataca o inimigo com seu machado causando 7 de dano e usando 7 pontos de estamina! ";
				Arrows -= 7;
			}
			else if (acao == 3)
			{
				cout << "voce tenta fugir" << endl;
			}
			else if (acao == 4)
			{
				for (int i = 0; i < inventario.size(), i++;)
				{
					cout << inventario[i] << endl;
				}
			}
			else
			{
				cout << "informe uma acao valida" << endl;
				system("CLS");
				acoes(1);
			}
		}
	}
};

class Enemy
{
public:
	int LVL;
	int HP;
	int ATK;
	int DEF;
	string arma;
	string NAME;

	Enemy(string Type)
	{
		NAME = Type;
	}

	~Enemy()
	{
		cout << "voce derrotou " << NAME << endl;
	}

	void defesa(string nome){
		HP = HP + DEF;
		cout << nome << " usou defesa e aumentou seus pontos de HP em " << DEF << " pontos" << endl;

	}

	void atacar(string nome){
		cout << nome << " atacou usando " << arma << " e causou " << ATK << " de dano!" << endl;
	}
};


class Orc : public Enemy{
	int LVL = randomNumber(15);
	int HP = 2 * LVL;
	int ATK = 3 * LVL;
	int DEF = 1 * LVL;
	string name = "ORC";
	string arma = "Clava";

};

class Goblin : public Enemy{
	public:
	int LVL = randomNumber(15);
	int HP = 2 * LVL;
	int ATK = 3 * LVL;
	int DEF = 1 * LVL;
	string name = "GOBLIN";
	string arma = "Faca";
};

class Assasin : public Enemy{
	public:
	int LVL = randomNumber(15);
	int HP = 2 * LVL;
	int ATK = 3 * LVL;
	int DEF = 1 * LVL;
	string name = "Assasin";
	string arma = "Katana";
};

string nomePlayer;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int classe;
	bool jogando = false;
	cout << "Bem vindo, qual seu nome jogador?: ";
	cin >> nomePlayer;

	cout << "Olá " << nomePlayer << " escolha uma classe!" << endl;
	cout << "1. Mago -- 2. Guerreiro -- 3. Arqueiro" << endl;
	cin >> classe;
	
	if (cin){
		jogando = true;
	}
	
	while(jogando == true){
	
	if (classe == 1)
	{			
		Wizard Player1 = Wizard(nomePlayer);
		cout << "Você escolheu a classe de mago, essas são suas ações disponiveis: " << endl;
		Player1.acoes(0);
	}
	if(classe == 2){
		Warrior Player1 = Warrior(nomePlayer);
		cout << "Você escolheu a classe de guerreiro, essas são suas ações disponiveis:" << endl;
		Player1.acoes(0);
	}
	if(classe == 2){
		Archer Player1 = Archer(nomePlayer);
		cout << "Você escolheu a classe de arqueiro, essas são suas ações disponiveis:" << endl;
		Player1.acoes(0);
	}

	cout << "Você está explorando a floresta quando de repente..." << endl;
	int randomEnemy = randomNumber(5);

	if (randomEnemy == 1){

	}
}

return 0;
}
