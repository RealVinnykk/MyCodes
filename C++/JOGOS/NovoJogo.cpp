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

string nomePlayer;

vector<string> Itens = {"Poção de Vida", "Poção de força", "Poção de Mana", "Recuperar Flechas", "BOOST"};
vector<int> numItens = {1, 2, 3, 4, 5};

int randomNumber(int MaxNumber)
{
	int resultado = rand() % MaxNumber;
	return resultado;
}

void wait(int sec)
{
	for (int i = 0; i < sec; i++)
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
	vector<string> inventario;
	string NAME;

	Player(string NOME)
	{
		NAME = NOME;
	}

	~Player()
	{
		if (HP > 0)
		{
			cout << " " << endl;
		}
		else
		{

			cout << "Voce morreu!" << endl;
		}
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
		if (mostrar == 0)
		{
			cout << "voce tem as seguintes acoes disponiveis:" << endl;
			cout << "1. Bola de fogo - 7 Dano, 9 Mana" << endl;
			cout << "2. Relampago - 3 Dano, 4 Mana" << endl;
			cout << "3. Fugir" << endl;
			cout << "4. Usar Item" << endl;
		}
		else
		{
			int acao;
			cout << "voce tem as seguintes acoes disponiveis:" << endl;
			cout << "1. Bola de fogo - 7 Dano, 9 Mana" << endl;
			cout << "2. Relampago - 3 Dano, 4 Mana" << endl;
			cout << "3. Fugir" << endl;
			cout << "4. Usar Item" << endl;
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
	int ATK1 = 4;
	int ATK2 = 7;

	Warrior(string NOME) : Player(NOME)
	{
		NAME = NOME;
	};
	acoes(int mostrar)
	{
		if (mostrar == 0)
		{
			cout << "voce tem as seguintes acoes disponiveis:" << endl;
			cout << "1. Espadada - 4 Dano, 2 Stamina" << endl;
			cout << "2. Machado - 7 Dano, 7 Stamina" << endl;
			cout << "3. Recuperar Stamina ( + 4 )" << endl;
			cout << "4. Fugir" << endl;
		}
		else
		{
			int acao;
			cout << "voce tem as seguintes acoes disponiveis:" << endl;
			cout << "1. Espadada - 4 Dano, 2 Stamina" << endl;
			cout << "2. Machado - 7 Dano, 7 Stamina" << endl;
			cout << "3. Recuperar Stamina ( + 4 )" << endl;
			cout << "4. Fugir" << endl;
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

	
};

class Orc : public Enemy
{
public:
	int LVL = 1;
	int ATK = 7;
	int DEF = 5;
	int HP = 12 + DEF;
	string name = "ORC";
	string arma = "Clava";

	Orc(string type) : Enemy(type)
	{
		name = type;
	}
	void stats()
	{
		cout << NAME << " stats:" << endl;
		cout << "HP: " << HP << endl;
		cout << "ATK: " << ATK << endl;
		cout << "DEF: " << DEF << endl;
	}
	void defesa()
	{
		HP + DEF;
		cout << NAME << " usou defesa e aumentou seus pontos de HP em " << DEF << " pontos" << endl;
	}

	void atacar()
	{
		cout << NAME << " atacou usando " << arma << " e causou " << ATK << " de dano!" << endl;
	}
};

class Goblin : public Enemy
{
public:
	int LVL = 2;
	int DEF = 1;
	int ATK = 3;
	int HP = 5 + DEF;
	string name = "GOBLIN";
	string arma = "Faca";

	Goblin(string type) : Enemy(type)
	{
		name = type;
	}
	void stats()
	{
		cout << NAME << " stats:" << endl;
		cout << "HP: " << HP << endl;
		cout << "ATK: " << ATK << endl;
		cout << "DEF: " << DEF << endl;
	}
	void defesa()
	{
		HP + DEF;
		cout << NAME << " usou defesa e aumentou seus pontos de HP em " << DEF << " pontos" << endl;
	}

	void atacar()
	{
		cout << NAME << " atacou usando " << arma << " e causou " << ATK << " de dano!" << endl;
	}
};

class Assasin : public Enemy
{
public:
	int LVL = 1;
	int DEF = 1;
	int ATK = 7;
	int HP = 6 + DEF;
	string name = "Assasin";
	string arma = "Katana";

	Assasin(string type) : Enemy(type)
	{
		name = type;
	}
	void stats()
	{
		cout << NAME << " stats:" << endl;
		cout << "HP: " << HP << endl;
		cout << "ATK: " << ATK << endl;
		cout << "DEF: " << DEF << endl;
	}void defesa()
	{
		HP + DEF;
		cout << NAME << " usou defesa e aumentou seus pontos de HP em " << DEF << " pontos" << endl;
	}

	void atacar()
	{
		cout << NAME << " atacou usando " << arma << " e causou " << ATK << " de dano!" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	bool jogando = false;
	cout << "Bem vindo, qual seu nome jogador?: ";
	cin >> nomePlayer;

	if (cin)
	{
		jogando = true;
	}

	int qualClasse;

	cout << "temos 3 classes disponiveis:" << endl;
	cout << "1- Guerreiro || 2- Arqueiro || 3- Mago" << endl;
	cout << "Qual classe voce escolhe?:";
	cin >> qualClasse;

	if (qualClasse == 1)
	{
		Warrior Player1 = Warrior(nomePlayer);
		jogando = true;
		while (jogando == true || Player1.HP > 0)
		{
			cout << "voce escolheu a classe de guerreiro" << endl;
			Player1.acoes(0);
			wait(5);
			Player1.stats();
			wait(5);
			cout << "voce está andando pela floresta quando de repente..." << endl;
			int qualInimigo = randomNumber(4);

			if (qualInimigo == 1)
			{
				bool lutando = false;
				cout << "um orc aparece na sua frente" << endl;
				cout << "analisando stats..." << endl;
				Orc ORC = Orc("ORC");
				wait(2);
				lutando = true;
				while (lutando = true)
				{
					ORC.stats();
					wait(2);
					int acao;
					Player1.acoes(1);
					cin >> acao;
					if (acao == 1)
					{
						cout << "voce usa sua espada e causa 4 de dano em ORC!" << endl;
						cout << "Isso custa 2 pontos de estamina!" << endl;
						Player1.stamina -= 2;
						ORC.HP -= Player1.ATK1;
						wait(3);
						cout << "voce tem " << Player1.stamina << " pontos de estamina restantes" << endl;
					}
					if (acao == 2)
					{
						cout << "voce usa seu machado e causa 7 de dano em ORC!" << endl;
						cout << "Isso custa 7 de estamina!" << endl;
						ORC.HP -= Player1.ATK2;
						Player1.stamina -= 7;
						wait(3);
						cout << "voce tem " << Player1.stamina << " pontos de estamina restantes" << endl;
					}
					if (acao == 3)
					{
						if (Player1.stamina < 12)
						{
							cout << "voce recupera 4 pontos de estamina e 3 pontos de vida" << endl;
							wait(3);
							Player1.stamina += 4;
							Player1.HP += 3;
							cout << "voce tem " << Player1.stamina << " pontos de estamina" << endl;
						}
						else
						{
							cout << "sua estamina está cheia, voce perdeu seu turno ao tentar recuperar estamina!" << endl;
							wait(4);
						}
					}

					if (ORC.HP < 0)
					{
						break;
					}

					cout << "turno de ORC" << endl;

					int acaoInimigo = randomNumber(3);

					if (acaoInimigo == 1)
					{
						ORC.atacar();
						Player1.HP -= ORC.ATK;
						if (Player1.HP <= 0)
						{
							cout << "voce morreu! " << endl;
							break;
						}
					}

					if (acaoInimigo == 2)
					{
						ORC.defesa();
						ORC.stats();
					}

				}
				break;
			}

			else if (qualInimigo == 2)
			{
				bool lutando = false;
				cout << "um Goblin aparece na sua frente" << endl;
				cout << "analisando stats..." << endl;
				wait(2);
					Goblin GOBLIN = Goblin("GOBLIN");
				lutando = true;
				while (lutando = true)
				{
					GOBLIN.stats();
					wait(2);
					int acao;
					Player1.acoes(1);
					cin >> acao;
					if (acao == 1)
					{
						cout << "voce usa sua espada e causa 4 de dano em GOBLIN!" << endl;
						cout << "Isso custa 2 pontos de estamina!" << endl;
						Player1.stamina -= 2;
						GOBLIN.HP -= Player1.ATK1;
						wait(3);
						cout << "voce tem " << Player1.stamina << " pontos de estamina restantes" << endl;
					}
					if (acao == 2)
					{
						cout << "voce usa seu machado e causa 7 de dano em GOBLIN!" << endl;
						cout << "Isso custa 7 de estamina!" << endl;
						Player1.stamina -= 7;
						GOBLIN.HP -= Player1.ATK2;
						wait(3);
						cout << "voce tem " << Player1.stamina << " pontos de estamina restantes" << endl;
					}
					if (acao == 3)
					{
						if (Player1.stamina < 12)
						{
							cout << "voce recupera 4 pontos de estamina e 3 pontos de vida" << endl;
							wait(3);
							Player1.stamina += 4;
							Player1.HP += 3;
							cout << "voce tem " << Player1.stamina << " pontos de estamina" << endl;
						}
						else
						{
							cout << "sua estamina está cheia, voce perdeu seu turno ao tentar recuperar estamina!" << endl;
							wait(4);
						}
					}

					if (GOBLIN.HP < 0)
					{
						break;
					}

					cout << "turno de GOBLIN" << endl;

					int acaoInimigo = randomNumber(3);

					if (acaoInimigo == 1)
					{
						GOBLIN.atacar();
						Player1.HP -= GOBLIN.ATK;
						if (Player1.HP <= 0)
						{
							cout << "voce morreu! " << endl;
							break;
						}
					}

					if (acaoInimigo == 2)
					{
						GOBLIN.defesa();
						GOBLIN.stats();
					}
				}
			}

			else if (qualInimigo == 3)
			{
				Assasin ASSASIN = Assasin("ASSASIN");
				cout << "um Assasino aparece na sua frente" << endl;
				cout << "analisando stats..." << endl;
				wait(2);
				ASSASIN.stats();
			}

			break;
		}
	}

	if (qualClasse == 2)
	{
		jogando = true;
		while (jogando == true)
		{
			Archer Player1 = Archer(nomePlayer);
			cout << "voce escolheu a classe de arqueiro" << endl;
			Player1.acoes(0);
			wait(5);
			Player1.stats();
			wait(5);
			cout << "voce está andando pela floresta quando de repente..." << endl;
			int qualInimigo = randomNumber(3);

			if (qualInimigo == 1)
			{
				Orc ORC = Orc("ORC");
				cout << "um  aparece na sua frente" << endl;
				cout << "analisando stats..." << endl;
				wait(2);
				ORC.stats();
			}
			else if (qualInimigo == 2)
			{
				Goblin GOBLIN = Goblin("GOBLIN");
				cout << "um Goblin aparece na sua frente" << endl;
				cout << "analisando stats..." << endl;
				wait(2);
				GOBLIN.stats();
			}
			else if (qualInimigo == 3)
			{
				Assasin ASSASIN = Assasin("ASSASIN");
				cout << "um Assasino aparece na sua frente" << endl;
				cout << "analisando stats..." << endl;
				wait(2);
				ASSASIN.stats();
			}
		}
	}

	if (qualClasse == 3)
	{

		jogando = true;
		while (jogando == true)
		{
			Wizard Player1 = Wizard(nomePlayer);
			cout << "voce escolheu a classe de mago" << endl;
			Player1.acoes(0);
			wait(5);
			Player1.stats();
			wait(5);
			cout << "voce está andando pela floresta quando de repente..." << endl;
			int qualInimigo = randomNumber(3);

			if (qualInimigo == 1)
			{
				Orc ORC = Orc("ORC");
				cout << "um orc aparece na sua frente" << endl;
				cout << "analisando stats..." << endl;
				wait(2);
				ORC.stats();
			}
			else if (qualInimigo == 2)
			{
				Goblin GOBLIN = Goblin("GOBLIN");
				cout << "um Goblin aparece na sua frente" << endl;
				cout << "analisando stats..." << endl;
				wait(2);
				GOBLIN.stats();
			}
			else if (qualInimigo == 3)
			{
				Assasin ASSASIN = Assasin("ASSASIN");
				cout << "um Assasino aparece na sua frente" << endl;
				cout << "analisando stats..." << endl;
				wait(2);
				ASSASIN.stats();
			}
		}
	}

	wait(2);
	int jogarDenovo;
	cout << "GAME OVER!" << endl;
	wait(2);
	cout << "voce deseja jogar denovo? (1 - SIM | 2 - NAO): ";
	cin >> jogarDenovo;

	if (jogarDenovo == 1)
	{
		main();
	}
	return 0;
}
