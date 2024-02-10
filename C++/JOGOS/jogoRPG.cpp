nclude<algorithm>
#include <cctype>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <list>
#include <locale.h>
#include <random>
#include <string.h>
#include <thread>
#include <vector>

	using namespace std;

void clear() { cout << "\u001b[2J"; }

void menuAcao()
{
	cout << "-----==========-----" << endl;
	cout << "1. Atacar      2. Defender" << endl;
	cout << "3. Fugir       4. Usar item" << endl;
	cout << "-----==========-----" << endl;
	cout << "Qual ação você irá realizar?" << endl;
}

void wait(int sec) { std::this_thread::sleep_for(std::chrono::seconds(sec)); }

class Enemy
{
public:
	int LVL;
	int HP;
	int ATK;
	string TYPE;

	Enemy(string NAME)
	{
		if (NAME == "GOBLIN")
		{
			TYPE = NAME;
			HP = 7;
			ATK = 2;
		}
		if (NAME == "ORC")
		{
			TYPE = NAME;
			HP = 15;
			ATK = 7;
		}
		if (NAME == "ASSASIN")
		{
			TYPE = NAME;
			HP = 5;
			ATK = 10;
		}
		if (NAME == "WEREWOLF")
		{
			TYPE = NAME;
			HP = 25;
			ATK = 10;
		}
		if (LVL > 5)
		{
			TYPE = NAME + " DE ELITE";
			HP = HP * 1.2;
			ATK = ATK * 1.2;
		}
	};
	~Enemy() { cout << TYPE << " foi derrotado!" << endl; }

	void defense() { HP += ATK; }

	void stats()
	{
		cout << "-----==========-----" << endl;
		cout << TYPE << " stats :" << endl;
		cout << "HP: " << HP << endl;
		cout << "ATK: " << ATK << endl;
		cout << "-----==========-----" << endl;
	}
};

class Player
{
public:
	int LVL = 1;
	int HP = 15;
	int XP = 0;
	int ATK = 5;
	string NAME;

	Player(string NOME) { NAME = NOME; }

	void defesa()
	{
		HP += 5;
		ATK -= 2;
	}

	void stats()
	{
		cout << "-----==========-----" << endl;
		cout << NAME << " stats :" << endl;
		cout << "HP: " << HP << endl;
		cout << "ATK: " << ATK << endl;
		cout << "XP: " << XP << endl;
		cout << "LVL: " << LVL << endl;
		cout << "-----==========-----" << endl;
	}
};

int randomNumber()
{
	int numeroMax = 4;
	int number = rand() % numeroMax;
	return number;
};

int randomLVL(int number)
{
	int numberMAX = rand() % number;
	return numberMAX;
};

void acoes()
{
	cout << "-----==========-----" << endl;
	cout << "1. Atacar      2. Defender" << endl;
	cout << "3. Fugir       4. Usar item" << endl;
	cout << "Qual ação você deseja realizar?" << endl;
	cout << "-----==========-----" << endl;
}

int main()
{
	setlocale(LC_ALL, "Portuguese");

	Player Player1("Player");

	cout << "Informe seu nome: ";
	cin >> Player1.NAME;

	wait(2);
	clear();

	cout << "Seja bem vindo!" << endl;
	wait(2);

	cout << "Iniciando jogo..." << endl;
	wait(2);

	int inimigo = 0;

	inimigo = randomNumber();

	if (inimigo == 1)
	{

		Enemy ORC("ORC"); // BY VINNY
						  << endl;
						  ndl;
						  
						  layer1.HP > 0) {
						  
						  					  //
						  					  //                                                                                                                                                                                                                        cout << "Turno de "<< ORC.TYPE <<"!" << endl;
						  					  //                                                                                                                                                                                                                                                                                                      ORC.defense();
						  					  //                                                                                                                                                                                                                                                                                                                                                      Enemy GOBLIN("GOBLIN"); // BY VINNY
						  					  //                                                                                                                                                                                                                                                                                                                                                                                        int acao;
						  					  //                                                                                                                                                                                                                                                                                                                                                                                                                                          cout << "Voce atacou " << GOBLIN.TYPE << " e causou " << Player1.ATK << " de dano!"
						  					  //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             }
						  					  //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               }
						  					  //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 if (acaoInimigo == 1) {
						  					  //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             break;
						  					  //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           cout  << GOBLIN.TYPE << " defendeu e aumentou seu HP para" << GOBLIN.HP << endl;
						  					  //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 break;
						  					  //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           }
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       while (ASSASIN.HP || Player1.HP > 0) {
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            if (ASSASIN.HP <= 0) {
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                cout << "Turno de " << ASSASIN.TYPE << "!" << endl;
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 cout << "Você Morreu!" << endl;
						  
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     }
						  
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 while (WOLF.HP || Player1.HP > 0) {
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     cin >> acao;
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        WOLF.HP -= Player1.ATK;
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            }
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  cout << "Voce defendeu e aumentou seu HP para " << Player1.HP << endl;
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                cout << "Voce fugiu!" << endl;
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        break;
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       wait(2);
						  
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           cout << WOLF.TYPE <<" atacou e causou " << WOLF.ATK << " de dano!"
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        << endl;
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            break;
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          cout << WOLF.TYPE <<" defendeu e aumentou seu HP para" << WOLF.HP << endl;
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                break;
						  
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            if (WOLF.HP <= 0) {
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    break;
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                if (Player1.HP <= 0) {
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        cout << "voce morreu!" << endl;
						  
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    cin >> jogarDenovo;
						  
						                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     }
