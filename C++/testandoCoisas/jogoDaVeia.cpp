#include <algorithm>
#include <iomanip>
#include <fstream>
#include <cctype>
#include <Windows.h>
#include <iostream>
#include <string.h>
#include <random>
#include <list>
#include <vector>
#include <locale.h>

using namespace std;

string jogador1;
string jogador2;
char jogador1L;
char jogador2L;
string vencedor;
bool jogoValendo = true;

vector<char> camada1 = {'_', '_', '_'};
vector<char> camada2 = {'_', '_', '_'};
vector<char> camada3 = {' ', ' ', ' '};

int esperar(int sec)
{

    for (int i = 0; i < sec; i++)
    {
        Sleep(1000);
    }
}

void estadoAtual()
{

    cout << camada1[0] << " | " << camada1[1] << " | " << camada1[2] << endl;
    cout << camada2[0] << " | " << camada2[1] << " | " << camada2[2] << endl;
    cout << camada3[0] << " | " << camada3[1] << " | " << camada3[2] << endl;
}

void menu()
{

    for (int i = 0; i < 1; i++)
    {

        cout << "Bem vindo ao jogo da velha" << endl;
        esperar(1);

        cout << "As regras são as seguintes : " << endl;
        cout << "Regra 1 - Cada jogador devera esperar seu turno para jogar " << endl;
        cout << "Regra 2 - Cada jogador tera apenas 25 segundos para jogar " << endl;
    }
}

void jogo()
{

    int qualJogador = 1;

    cout << "Informe o nome do jogador 1 : ";
    cin >> jogador1;

    for (int i = 0; i < jogador1.length(); i++)
    {
        jogador1[i] = toupper(jogador1[i]);
    }

    jogador1L = jogador1[0];

    cout << "informe o nome do jogador 2 : ";
    cin >> jogador2;

    for (int i = 0; i < jogador2.length(); i++)
    {
        jogador2[i] = toupper(jogador2[i]);
    }

    jogador2L = jogador2[0];

    menu();

    while (jogoValendo == true)
    {

        int qualCamada;
        int qualLinha;
        int *pqualLinha = &qualLinha;
        int *pqualCamada = &qualCamada;

        if (qualJogador == 1)
        {
            cout << "Vez de " << jogador1 << endl;

            estadoAtual();

            cout << "qual camada voce quer jogar?" << endl;
            cin >> qualCamada;

            qualCamada--;

            if (qualCamada == 0)
            {
                cout << "jogador " << jogador1 << " escolheu jogar na camada 1" << endl;

                estadoAtual();

                cout << "Qual linha voce deseja jogar?" << endl;
                cin >> qualLinha;

                qualLinha--;

                if (cin)
                {
                    if (qualLinha == 0)
                    {
                        camada1.insert(camada1.begin() + 0, jogador1L);
                    }
                    if (qualLinha == 1)
                    {
                        camada1.insert(camada1.begin() + 1, jogador1L);
                    }
                    if (qualLinha == 2)
                    {
                        camada1.insert(camada1.begin() + 2, jogador1L);
                    }
                }

                if (camada1[0] == jogador1L && camada1[1] == jogador1L && camada1[2] == jogador1L)
                {
                    estadoAtual();

                    jogoValendo == false;

                    esperar(2);

                    cout << "Jogador " << jogador1 << " venceu a partida" << endl;
                    string jogarNovamente;

                    esperar(2);
                    cout << "Voce deseja jogar novamente? (SIM / NAO)" << endl;
                    cin >> jogarNovamente;

                    if (jogarNovamente == "SIM")
                    {
                        jogoValendo == true;
                        break;
                    }
                    if (jogarNovamente == "NAO")
                    {
                        cout << "Obrigado por jogar, saindo!" << endl;
                        esperar(2);
                    }
                }
                if (camada2[0] == jogador1L && camada2[1] == jogador1L && camada2[2] == jogador1L)
                {
                    estadoAtual();

                    jogoValendo == false;

                    esperar(2);

                    cout << "Jogador " << jogador1 << " venceu a partida" << endl;
                    string jogarNovamente;

                    esperar(2);
                    cout << "Voce deseja jogar novamente? (SIM / NAO)" << endl;
                    cin >> jogarNovamente;

                    if (jogarNovamente == "SIM")
                    {
                        jogoValendo == true;
                        break;
                    }
                    if (jogarNovamente == "NAO")
                    {
                        cout << "Obrigado por jogar, saindo!" << endl;
                        esperar(2);
                    }
                }
                if (camada3[0] == jogador1L && camada3[1] == jogador1L && camada3[2] == jogador1L)
                {
                    estadoAtual();

                    jogoValendo == false;

                    esperar(2);

                    cout << "Jogador " << jogador1 << " venceu a partida" << endl;
                    string jogarNovamente;

                    esperar(2);
                    cout << "Voce deseja jogar novamente? (SIM / NAO)" << endl;
                    cin >> jogarNovamente;

                    if (jogarNovamente == "SIM")
                    {
                        jogoValendo == true;
                        break;
                    }
                    if (jogarNovamente == "NAO")
                    {
                        cout << "Obrigado por jogar, saindo!" << endl;
                        esperar(2);
                    }
                }

                system("pause");

                qualJogador = 2;
            }

            if (qualCamada == 1)
            {
                cout << "jogador " << jogador1 << " escolheu jogar na camada 2" << endl;

                estadoAtual();

                cout << "Qual linha voce deseja jogar?" << endl;
                cin >> qualLinha;

                qualLinha--;

                if (cin)
                {
                    if (qualLinha == 0)
                    {
                        camada2.insert(camada2.begin() + 0, jogador1L);
                    }
                    if (qualLinha == 1)
                    {
                        camada2.insert(camada2.begin() + 1, jogador1L);
                    }
                    if (qualLinha == 2)
                    {
                        camada2.insert(camada2.begin() + 2, jogador1L);
                    }
                }

                system("pause");

                qualJogador = 2;
            }

            if (qualCamada == 2)
            {
                cout << "jogador " << jogador1 << " escolheu jogar na camada 3" << endl;

                estadoAtual();

                cout << "Qual linha voce deseja jogar?" << endl;
                cin >> qualLinha;

                qualLinha--;

                if (cin)
                {
                    if (qualLinha == 0)
                    {
                        camada3.insert(camada3.begin() + 0, jogador1L);
                    }
                    if (qualLinha == 1)
                    {
                        camada3.insert(camada3.begin() + 1, jogador1L);
                    }
                    if (qualLinha == 2)
                    {
                        camada3.insert(camada3.begin() + 2, jogador1L);
                    }
                }
                system("pause");

                qualJogador = 2;
            }
        }

        if (qualJogador == 2)
        {

            cout << "Vez de " << jogador2 << endl;

            estadoAtual();

            cout << "qual camada voce quer jogar?" << endl;
            cin >> qualCamada;

            qualCamada--;

            if (qualCamada == 0)
            {
                cout << "jogador " << jogador2 << " escolheu jogar na camada 1" << endl;

                estadoAtual();

                cout << "Qual linha voce deseja jogar?" << endl;
                cin >> qualLinha;

                qualLinha--;

                estadoAtual();

                cout << "qual camada voce quer jogar?" << endl;
                cin >> qualCamada;

                qualCamada--;

                if (qualCamada == 0)
                {
                    cout << "jogador " << jogador1 << " escolheu jogar na camada 1" << endl;

                    estadoAtual();

                    cout << "Qual linha voce deseja jogar?" << endl;
                    cin >> qualLinha;

                    qualLinha--;

                    if (cin)
                    {
                        if (qualLinha == 0)
                        {
                            camada1.insert(camada1.begin() + 0, jogador2L);
                        }
                        if (qualLinha == 1)
                        {
                            camada1.insert(camada1.begin() + 1, jogador2L);
                        }
                        if (qualLinha == 2)
                        {
                            camada1.insert(camada1.begin() + 2, jogador2L);
                        }
                    }

                    if (camada1[0] == jogador2L && camada1[1] == jogador2L && camada1[2] == jogador2L)
                    {
                        estadoAtual();

                        jogoValendo == false;

                        esperar(2);

                        cout << "Jogador " << jogador2 << " venceu a partida" << endl;
                        string jogarNovamente;

                        esperar(2);
                        cout << "Voce deseja jogar novamente? (SIM / NAO)" << endl;
                        cin >> jogarNovamente;

                        if (jogarNovamente == "SIM")
                        {
                            jogoValendo == true;
                        }
                        if (jogarNovamente == "NAO")
                        {
                            cout << "Obrigado por jogar, saindo!" << endl;
                            esperar(2);
                            break;
                        }
                    }
                    if (camada2[0] == jogador2L && camada2[1] == jogador2L && camada2[2] == jogador2L)
                    {
                        estadoAtual();

                        jogoValendo == false;

                        esperar(2);

                        cout << "Jogador " << jogador2 << " venceu a partida" << endl;
                        string jogarNovamente;

                        esperar(2);
                        cout << "Voce deseja jogar novamente? (SIM / NAO)" << endl;
                        cin >> jogarNovamente;

                        if (jogarNovamente == "SIM")
                        {
                            jogoValendo == true;
                            break;
                        }
                        if (jogarNovamente == "NAO")
                        {
                            cout << "Obrigado por jogar, saindo!" << endl;
                            esperar(2);
                        }
                    }
                    if (camada3[0] == jogador2L && camada3[1] == jogador2L && camada3[2] == jogador2L)
                    {
                        estadoAtual();

                        jogoValendo == false;

                        esperar(2);

                        cout << "Jogador " << jogador2 << " venceu a partida" << endl;
                        string jogarNovamente;

                        esperar(2);
                        cout << "Voce deseja jogar novamente? (SIM / NAO)" << endl;
                        cin >> jogarNovamente;

                        if (jogarNovamente == "SIM")
                        {
                            jogoValendo == true;
                            break;
                        }
                        if (jogarNovamente == "NAO")
                        {
                            cout << "Obrigado por jogar, saindo!" << endl;
                            esperar(2);
                        }
                    }

                    qualJogador = 1;
                }
            }

            if (qualCamada == 1)
            {
                cout << "jogador " << jogador2 << " escolheu jogar na camada 2" << endl;

                estadoAtual();

                cout << "Qual linha voce deseja jogar?" << endl;
                cin >> qualLinha;

                qualLinha--;

                if (cin)
                {
                    if (qualLinha == 0)
                    {
                        camada2.insert(camada2.begin() + 0, jogador2L);
                    }
                    if (qualLinha == 1)
                    {
                        camada2.insert(camada2.begin() + 1, jogador2L);
                    }
                    if (qualLinha == 2)
                    {
                        camada2.insert(camada2.begin() + 2, jogador2L);
                    }

                    qualJogador = 1;
                }

                if (camada1[0] == jogador2L && camada1[1] == jogador2L && camada1[2] == jogador2L)
                {
                    estadoAtual();

                    jogoValendo == false;

                    esperar(2);

                    cout << "Jogador " << jogador2 << " venceu a partida" << endl;
                    string jogarNovamente;

                    esperar(2);
                    cout << "Voce deseja jogar novamente? (SIM / NAO)" << endl;
                    cin >> jogarNovamente;

                    if (jogarNovamente == "SIM")
                    {
                        jogoValendo == true;
                    }
                    if (jogarNovamente == "NAO")
                    {
                        cout << "Obrigado por jogar, saindo!" << endl;
                        esperar(2);
                        break;
                    }
                }
                if (camada2[0] == jogador2L && camada2[1] == jogador2L && camada2[2] == jogador2L)
                {
                    estadoAtual();

                    jogoValendo == false;

                    esperar(2);

                    cout << "Jogador " << jogador2 << " venceu a partida" << endl;
                    string jogarNovamente;

                    esperar(2);
                    cout << "Voce deseja jogar novamente? (SIM / NAO)" << endl;
                    cin >> jogarNovamente;

                    if (jogarNovamente == "SIM")
                    {
                        jogoValendo == true;
                        break;
                    }
                    if (jogarNovamente == "NAO")
                    {
                        cout << "Obrigado por jogar, saindo!" << endl;
                        esperar(2);
                    }
                }
                if (camada3[0] == jogador2L && camada3[1] == jogador2L && camada3[2] == jogador2L)
                {
                    estadoAtual();

                    jogoValendo == false;

                    esperar(2);

                    cout << "Jogador " << jogador2 << " venceu a partida" << endl;
                    string jogarNovamente;

                    esperar(2);
                    cout << "Voce deseja jogar novamente? (SIM / NAO)" << endl;
                    cin >> jogarNovamente;

                    if (jogarNovamente == "SIM")
                    {
                        jogoValendo == true;
                        break;
                    }
                    if (jogarNovamente == "NAO")
                    {
                        cout << "Obrigado por jogar, saindo!" << endl;
                        esperar(2);
                    }
                }

                qualJogador = 1;
            }

            if (qualCamada == 2)
            {
                cout << "jogador " << jogador2 << " escolheu jogar na camada 3" << endl;

                estadoAtual();

                cout << "Qual linha voce deseja jogar?" << endl;
                cin >> qualLinha;

                qualLinha--;

                if (cin)
                {
                    if (qualLinha == 0)
                    {
                        camada3.insert(camada3.begin() + 0, jogador2L);
                    }
                    if (qualLinha == 1)
                    {
                        camada3.insert(camada3.begin() + 1, jogador2L);
                    }
                    if (qualLinha == 2)
                    {
                        camada3.insert(camada3.begin() + 2, jogador2L);
                    }

                    if (camada1[0] == jogador2L && camada1[1] == jogador2L && camada1[2] == jogador2L)
                    {
                        estadoAtual();

                        jogoValendo == false;

                        esperar(2);

                        cout << "Jogador " << jogador2 << " venceu a partida" << endl;
                        string jogarNovamente;

                        esperar(2);
                        cout << "Voce deseja jogar novamente? (SIM / NAO)" << endl;
                        cin >> jogarNovamente;

                        if (jogarNovamente == "SIM")
                        {
                            jogoValendo == true;
                        }
                        if (jogarNovamente == "NAO")
                        {
                            cout << "Obrigado por jogar, saindo!" << endl;
                            esperar(2);
                            break;
                        }
                    }
                    if (camada2[0] == jogador2L && camada2[1] == jogador2L && camada2[2] == jogador2L)
                    {
                        estadoAtual();

                        jogoValendo == false;

                        esperar(2);

                        cout << "Jogador " << jogador2 << " venceu a partida" << endl;
                        string jogarNovamente;

                        esperar(2);
                        cout << "Voce deseja jogar novamente? (SIM / NAO)" << endl;
                        cin >> jogarNovamente;

                        if (jogarNovamente == "SIM")
                        {
                            jogoValendo == true;
                            break;
                        }
                        if (jogarNovamente == "NAO")
                        {
                            cout << "Obrigado por jogar, saindo!" << endl;
                            esperar(2);
                        }
                    }
                    if (camada3[0] == jogador2L && camada3[1] == jogador2L && camada3[2] == jogador2L)
                    {
                        estadoAtual();

                        jogoValendo == false;

                        esperar(2);

                        cout << "Jogador " << jogador2 << " venceu a partida" << endl;
                        string jogarNovamente;

                        esperar(2);
                        cout << "Voce deseja jogar novamente? (SIM / NAO)" << endl;
                        cin >> jogarNovamente;

                        if (jogarNovamente == "SIM")
                        {
                            jogoValendo == true;
                            break;
                        }
                        if (jogarNovamente == "NAO")
                        {
                            cout << "Obrigado por jogar, saindo!" << endl;
                            esperar(2);
                            break;
                        }
                    }

                    qualJogador = 1;
                }
            }
        }
    }
}

int main()
{

    jogo();

    system("pause");
    return 0;
}