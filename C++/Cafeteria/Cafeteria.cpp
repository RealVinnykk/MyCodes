#include <algorithm>
#include <iomanip>
#include <cctype>
#include <Windows.h>
#include <iostream>
#include <random>
#include <list>
#include <vector>
#include <string.h>
#include <locale.h>

using namespace std;

void wait(int sec ){
    Sleep(sec * 1000);
}

void escrever(string message, int tempo){
    for (int i = 0; i < message.length(); i++)
    {
       cout << message[i]; 
       wait(tempo);
    }

    cout << endl;
}


void menu(){

    cout << "-----==========-----" << endl;
    cout << "-----== MENU ==-----" << endl;
    cout << "1 - Bebidas " << endl;
    cout << "2 - Pratos Principais" << endl;
    cout << "3 - Sobremesas" << endl;
    cout << "4 - Caixa " << endl;
    cout << "-----== FIM ==-----" << endl;
    cout << "-----==========-----" << endl;


    //~ Fim
}


        vector<string> Cesta;
        vector<int> vCesta;



void sacola(){
        int vTOTAL;
        cout << "O status da sua sacola e a seguinte" << endl;
        for (int i = 0; i < Cesta.size(); i++)
            {
                cout << "Item " << Cesta[i] << " no valor de: " << vCesta[i] << " reais" << endl;
                wait(1);
            }
            
    }


    string nomeCliente;

int main(){


    cout << "bem-vindo a cafeteria cliente, qual seu nome?: ";
    cin >> nomeCliente;

    wait(2);
    bool pedindo = true;
    int areaMenu;
    int item;
    int metodo;
    int valTotal = 0;

    while(pedindo == true){
        
        vector<string> Bebidas = {"Coca-Cola", "Guarana", "Pepsi"};
        int vBebidas[3] = {3, 4, 7};

        vector<string> PratosPrincipais = {"Panquecas", "Ovo-Frito", "Cafe Completo"};
        int vPratosPrincipais[3] = {2,5,15};

        vector<string> Sobremesas = {"Sorvete", "Bolo-Chocolate", "Macaron"};
        int vSobremesas[3] = {3,4,5};


    

    cout << "ola " << nomeCliente << " temos so seguintes items do menu disponiveis para pedir: " << endl;

    wait(2);
    menu();


    cout << "qual area do menu voce deseja ir?:" << endl;
    cin >> areaMenu;

    if(areaMenu == 1){
        bool PBEBIDAS = true;

        while(PBEBIDAS == true)
        {
            cout << "voce esta na area de bebidas, temos os seguintes itens" << endl;
    
        for (int i = 0; i < Bebidas.size(); i++)
        {
            cout << "item " << Bebidas[i] << " no valor de: " << vBebidas[i] << endl;
            wait(1);
        }

    cout << "qual item voce deseja?(digite 4 para voltar)" << endl;
    cin >> item;
    item--;
        if (cin && item + 1 != 4)
        {
            cout << "voce adicionou " << Bebidas[item] <<" no valor de " << vBebidas[item] << "$ na sua sacola!" << endl;
            Cesta.push_back(Bebidas[item]);
            vCesta.push_back(vBebidas[item]);
            valTotal += vBebidas[item];
            wait(1);
            sacola();
            
        }else{
            break;
        }
    }
    }//~ Fim Bebidas

    if (areaMenu == 2)
    {
       bool PPrato = true;

       while (PPrato == true)
       {
        cout << "voce entrou na area de pratos principais, temos os seguintes itens" << endl;
        for (int i = 0; i < PratosPrincipais.size(); i++)
        {
           cout << "Item " << PratosPrincipais[i] << " no valor de " << vPratosPrincipais[i] << endl; 
            wait(1);
        }

        cout << "qual item voce deseja?(digite 4 para voltar): ";
        cin >> item;
        item--;
        if (cin && item + 1 != 4)
        {
            cout << "item " << PratosPrincipais[item] << " foi adicionado na sua sacola no valor de " << vPratosPrincipais[item] << " reais" << endl;
            Cesta.push_back(PratosPrincipais[item]);
            vCesta.push_back(vPratosPrincipais[item]);
            valTotal += vPratosPrincipais[item];
            wait(1);
            sacola();
        }else{
            break;
        }
        
        
       }
        
    }
    

    if(areaMenu == 3){
        bool PSOBRE = true;

        while(PSOBRE == true)
        {cout << "voce esta na area de sobremesas do menu, temos os seguintes itens" << endl;
        for (int i = 0; i < Sobremesas.size(); i++)
        {
           cout << "item " << Sobremesas[i] << " no valor de: " << vSobremesas[i] << endl;
           wait(2);
        }

        cout << "qual item voce deseja?(digite 4 para voltar)" << endl;
        cin >> item;
        item--;

        if(cin && item + 1 != 4){
            cout << "Item " << Sobremesas[item] << " foi adicionado a sua sacola no valor de "<< vSobremesas[item] << "$ reais! " << endl;
            Cesta.push_back(Sobremesas[item]);
            vCesta.push_back(vSobremesas[item]);
            valTotal += vSobremesas[item];
            wait(1);
            sacola();
       
        }else{
            break;
        }
        }
        
        
        
    }
    
    if (areaMenu == 4 && Cesta.size() > 0)
    {
        bool pagando = true;
        int senha = 5235;

        while(pagando == true){

        cout << "voce está no caixa, como voce ira pagar?" << endl;
        wait(0.5);
        cout << "1. Dinheiro";
        wait(0.5);
        cout << "2. Debito";
        wait(0.5);
        cout << "3. Credito";
        wait(0.5);
        cout << "4. ????";
        cin >> metodo;

        if (metodo == 1)
        {
         cout << "voce ira pagar seu pedido em dinheiro";
        }
        if (metodo == 2)
        {
            bool cartao = true;
            while (cartao == true)
            {
            int inputSenha;
         cout << "voce ira realizar o pagamento no debito" << endl;
         wait(2);
         cout << "digite sua senha: ";
         cin >> inputSenha;

         if (cin && inputSenha == senha)
         {
           cout << "senha correta, realizando pagamento...";
            wait(2);
            break;            

         }else{
            wait(2);
            cout << "senha incorreta! informe sua senha novamente" << endl;
        break;
         }
         }

         
        
        
        }

        if (metodo == 3)
        {
            bool cartao = true;
            while (cartao == true)
            {
            int inputSenha;
         cout << "voce ira realizar o pagamento no credito" << endl;
         wait(2);
         cout << "digite sua senha: ";
         cin >> inputSenha;

         if (cin && inputSenha == senha)
         {
           cout << "senha correta, realizando pagamento...";
            wait(2);
            

         }else{
            cout << "senha incorreta! informe sua senha novamente" << endl;
            wait(2);
            break;
         }
         }

        }
        if (metodo == 4)
        {
          cout << "voce encontrou um bilhete no seu bolso..." << endl;
          wait(2);
          cout << "o bilhete diz: sua senha é 5235!" << endl;
        }
        
        }


         cout << "Os itens do seu pedido foram: " << endl;
         for (int i = 0; i < Cesta.size(); i++)
         {
            cout << "Item " << Cesta[i] << " no valor de " << vCesta[i] << endl;
         }

         cout << "o total do seu pedido foi de " << valTotal << " reais" << endl;
        wait(2); 
        escrever("realizando pagamento...", 0.5);
        wait(2);
        Cesta.clear();
        vCesta.clear();
        cout << "pagamento realizado!" << endl;
        cout << "obrigado por comprar na nossa cafeteria hoje! tenha um bom dia!" << endl;
        wait(5);

        }
        

        
    }
    


    


    cout << "LEAVING..." << endl;
    return 0; //^ Finishing main function
}