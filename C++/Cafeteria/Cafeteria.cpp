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

void chars(string name, int time, int takeout){

    if (takeout == 1)
    {
        for (int i = 0; i < name.size(); i++)
        {
           cout << name[i];
           Sleep(time); 
        }
           cout << "" << endl;
        
    }else{
        for (int i = 0; i < name.size(); i++)
        {
          cout << name[i];
          Sleep(time); 
        }
        
    }
    

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
    int valTotal;

    while(pedindo == true){
        
        vector<string> Bebidas = {"Coca-Cola", "Guarana", "Pepsi"};
        vector<int> vBebidas = {3, 4, 7};

        vector<string> PratosPrincipais = {"Panquecas", "Ovo-Frito", "Cafe Completo"};
        vector<int> vPratosPrincipais = {2,5,15};

        vector<string> Sobremesas = {"Sorvete", "Bolo-Chocolate", "Macaron"};
        vector<int> vSobremesas = {3,4,5};


    

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
            wait(2);
        }

    cout << "qual item voce deseja?(digite 4 para voltar)" << endl;
    cin >> item;
    item--;
        if (cin && item + 1 != 4)
        {
            cout << "voce adicionou " << Bebidas[item] <<" no valor de " << vBebidas[item] << "$ na sua sacola!" << endl;
            Cesta.push_back(Bebidas[item]);
            vCesta.push_back(vBebidas[item]);

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
           wait(1); 
        }

        cout << "qual item voce deseja?(digite 4 para voltar)" << endl;
        cin >> item;
        item--;

        if(cin && item + 1 != 4){
            cout << "Item " << Sobremesas[item] << " foi adicionado a sua sacola no valor de "<< vSobremesas[item] << "$ reais! " << endl;
            Cesta.push_back(Sobremesas[item]);
            vCesta.push_back(vSobremesas[item]);
            wait(2);
            sacola();
       
        }else{
            break;
        }
        }
        
        
        
    }
    
    if (areaMenu == 4 && Cesta.size() > 0)
    {
        
        cout << "voce está no caixa, como voce ira pagar?" << endl;
        cout << "1. Dinheiro";
        cout << "2. Debito";
        cout << "3. Credito";
        cout << "4. ????";
        cin >> metodo;

        if (metodo == 1)
        {
         cout << "voce ira pagar seu pedido em dinheiro";
         for (int i = 0; i < 2; i++)
         {
            cout << ".";
         }
         cout << "." << endl;

         cout << "Os itens do seu pedido foram: " << endl;
         for (int i = 0; i < Cesta.size(); i++)
         {
            cout << "Item " << Cesta[i] << " no valor de " << vCesta[i] << endl;
                valTotal = 0 + vCesta[i];
         }
         cout << "o total do seu pedido foi de " << valTotal << " reais" << endl;
        wait(2); 
        cout << "realizando pagamento..." << endl;
        wait(2);
        Cesta.clear();
        vCesta.clear();
        cout << "pagamento realizado!" << endl;
        cout << "obrigado por comprar na nossa cafeteria hoje! tenha um bom dia!";
        }
        
    }
    


    }


    cout << "LEAVING..." << endl;
    return 0; //^ Finishing main function
}