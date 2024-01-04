#include <cctype>
#include <Windows.h>
#include <iostream>
#include <random>
#include <string.h>
#include <list>
#include <locale.h>

using namespace std;

void wait(int sec)
{
    int i;
    for (i = 0; i < sec; i++)
    {
        Sleep(1000);
    }
}

int quantidade = 0;

int quantosAlunos()
{
    cout << "Na escola, temos " << quantidade << " alunos";
}

int contador()
{
    quantidade++;
    return quantidade;
}

class Account
{
private:
    int accountNumber;
    int password;

public:
    int openAccount = 0;
    int balance = 0;
    string name;

    Account(string nome, int senha)
    {
        name = nome;
        password = senha;
    };

    int deposit()
    {
        int depositValue;
        cout << "informe a quantidade de dinheiro a ser depositada" << endl
             << "->";
        cin >> depositValue;

        balance = balance + depositValue;

        cout << "valor depositado com sucesso!" << endl;
        cout << "voce tem " << balance << " reais agora!" << endl;
        system("pause");
        system("CLS");

        return balance;
    }

    int withDraw()
    {
        int withDrawValue;

        if (balance > 0)
        {
            cout << "voce tem " << balance << " reais disponivel para saque, quanto voce deseja sacar?" << endl
                 << "->";
            cin >> withDrawValue;

            if (withDrawValue > balance)
            {
                cout << "voce nao tem dinheiro o suficiente para fazer um saque deste valor, por favor realize um deposito para concluir a acao" << endl;
                ;
                system("pause");
                system("CLS");
            }
            else
            {
                balance = balance - withDrawValue;
                cout << "saque realizado com sucesso, voce tem " << balance << " reais na sua conta" << endl;
                return balance;
                system("pause");
                system("CLS");
            }
        }
        else if (balance == 0)
        {
            cout << "voce tem " << balance << " reais na sua conta e nao podera realizar nenhum saque, faca um deposito" << endl;
            system("pause");
        }
        else if (balance < 0)
        {
            cout << "voce tem dividas na sua conta e esta no vermelho, pague suas pendencias!" << endl;
            system("pause");
        }
    }

    int checkBalance()
    {
        cout << "voce tem " << balance << " dolares na sua conta" << endl;
        system("pause");
    }
};

class Item
{
private:
    int codigo;

public:
    string nomeP;
    string tipoP;
    int valorP;

    Item(string nome, string tipo, int valor)
    {
        nomeP = nome;
        tipoP = tipo;
        valorP = valor;


    };

    int informarValor()
    {
        cout << "O valor do produto " << nomeP << " e de " << valorP << endl;
        return valorP;
    }
};




void criarItem(string nomeNovo, string TipeItem, int valueItem)
{
    string nomeSistema;

    cout << "Nome do item : ";
    cin >> nomeSistema;

    cout << "Tipo do item (BEBIDA, ALIMENTO, GULOSEIMA): ";
    cin >> TipeItem;

    cout << "Valor do item: ";
    cin >> valueItem;

    cout << "item criado com sucesso" << endl;


    // Item nomeSistema = Item(nomeNovo, TipeItem, valueItem);
}
