#include "funcoes.h"
#include "classes.h"
#include <cctype>
#include <Windows.h>
#include <iostream>
#include <string.h>
#include <random>
#include <list>
#include <locale.h>

using namespace std;

int valendo = 1;
string criarConta;
string operacao;
string qualOperacao;
string nome;
string lugar;
int i;
int idade;
int senha;

Account conta = Account(nome, senha);


//^ menu principal para escolha do lugar que o cara quer visitar
void menuPrincipal(){

    cout << "--===================--" << endl;
    cout << "--===================--" << endl;
    cout << "-===== Bem Vindo =====-" << endl;
    cout << " " << endl;
    cout << "=- Banco -=" << endl;
    cout << "=- Conveniencia -=" << endl;
    cout << "=- Bar -=" << endl;
    cout << "--===================--" << endl;
    cout << "--===================--" << endl;
    cout << "Aonde voce deseja ir?" << endl;
    
}
//^ caso o usuario queira ir no bar
int irNoBar(){
    string qual;
    int cachaca = 15;
    int vodka = 9;
    int cerveja = 4;
    cout << "voce entrou no bar..." << endl;
    cout << "--====================--" << endl;
    cout << "voce tem as seguintes escolhas de bebidas:"<< endl;
    cout << "Cachaca : $" << cachaca << endl;
    cout << "Vodka : $" << vodka << endl;
    cout << "Cerveja : $" << cerveja << endl;
    cout << "--===================--" << endl;
    cout << "qual bebida voce quer comprar ?" << endl;
    cout << "caso queira sair digite sair." << endl;
    cin >> qual;

    for (i = 0; i < qual.length(); i++)
    {
        qual[i] = toupper(qual[i]);
    }i = 0;

    if (qual == "VODKA" && conta.balance > vodka)
    {
        conta.balance -= vodka;
        cout << "voce comprou uma vodka por " << vodka << " e agora tem " << conta.balance << " reais restantes" << endl;
        system("pause");
        return 0;
    }else{
        cout << "Voce nao tem dinheiro o suficiente para comprar esta bebida, crie uma conta no banco e realize um deposito para poder comprar!" << endl;
        return 0;
    }
    
    if (qual == "CACHACA" && conta.balance > cachaca)
    {
        conta.balance -= cachaca;
        cout << "voce comprou uma vodka por " << cachaca << " e agora tem " << conta.balance << " reais restantes" << endl;
        system("pause");
        return 0;
    }else{
        cout << "Voce nao tem dinheiro o suficiente para comprar esta bebida, crie uma conta no banco e realize um deposito para poder comprar!" << endl;
        return 0;
    }
    
    if (qual == "CERVEJA" && conta.balance > cerveja)
    {
        conta.balance -= cerveja;
        cout << "voce comprou uma vodka por " << cerveja << " e agora tem " << conta.balance << " reais restantes" << endl;
        system("pause");
        return 0;
    }else{
        cout << "Voce nao tem dinheiro o suficiente para comprar esta bebida, crie uma conta no banco e realize um deposito para poder comprar!" << endl;
        return 0;
    }
    
    if (qual == "SAIR")
    {
        conta.balance -= vodka;
        cout << "voce comprou uma vodka por " << vodka << " e agora tem " << conta.balance << " reais restantes" << endl;
        system("pause");
        return 0;
    }else{
        cout << "por favor informe uma bebida valida!" << endl;
    }
    
}


int main()
{
    while (valendo = 1)
    {

    Menu:
        
    menuPrincipal();
    
    cin >> lugar;

    for(i = 0; i < lugar.length(); i++)
    {
        lugar[i] = toupper(lugar[i]);
    }
    i = 0;

    if (lugar == "BANCO")
    {
        cout << "voce deseja criar sua conta no banco?: ";
        cin >> criarConta;

        for (i = 0; i < criarConta.length(); i++)
        {
        criarConta[i] = toupper(criarConta[i]);
        }i = 0;

    if(criarConta == "Y"){
        conta.openAccount = 1;
        cout << "ok, vamos precisar de alguns dos seus dados, informe seu nome: ";
        cin >> nome;

        cout << "ok, agora preciso da sua idade: ";
        cin >> idade;

        cout << "por fim, crie sua senha: ";
        cin >> senha;

        

        cout << "sua conta foi criada, voce deseja realizar alguma operacao no momento?";
        cin >> operacao;

        for (i = 0; i < operacao.length(); i++)
    {
        operacao[i] = toupper(operacao[i]);
    }i = 0;

        if (operacao == "Y")
        {
            entrarConta:
            cout << "temos as seguintes operacoes no momento: saque, deposito e verificacao de saldo, qual voce deseja realizar ?" << endl;
            cout << "SAQUE | DEPOSITO | SALDO" << endl;
            cin >> qualOperacao;

            for (i = 0; i < qualOperacao.length(); i++)
            {
        qualOperacao[i] = toupper(qualOperacao[i]);
            }
            i = 0;

            
            if (qualOperacao == "SAQUE")
            {
                conta.withDraw();
                goto entrarConta;
            }else if(qualOperacao == "DEPOSITO"){
                conta.deposit();
                goto entrarConta;
            }else if(qualOperacao == "SALDO"){
                conta.checkBalance();
                goto entrarConta;
            }else if(qualOperacao == "SAIR"){
            goto Menu;
            }else{
                cout << "por favor informe uma operacao valida";
                system("pause");
                goto entrarConta;
            }
            

        }else if(operacao == "N"){
            cout << "ok, sua conta foi criada mas voce escolheu nao realizar mudancas no momento" << endl;
            system("pause");
        }else{
            system("pause");
        }
        

    }else if (criarConta == "N")
    {
        cout << "voce escolheu nao criar uma conta no momento";
        system("pause");
    }else{
        cout << "informe um caractere valido!";
        system("pause");
    }
    }else if( lugar == "BAR" && conta.openAccount != 0){
        irNoBar();
    }else if( lugar == "BAR" && conta.openAccount == 0){
        cout << "Voce precisa de uma conta no banco para comprar coisas!" << endl;
        system("pause");
        goto Menu;
    }else if(lugar == "CONVENIENCIA" && conta.openAccount != 0){

    }else if(lugar == "CONVENIENCIA" && conta.openAccount == 0){
        cout << "Voce precisa de uma conta no banco para comprar coisas!" << endl;
        system("pause");
        goto Menu;
    }




    }
    
    
    

    return 0;
}