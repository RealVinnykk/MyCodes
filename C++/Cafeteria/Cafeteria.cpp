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

        cout << "voce esta na area de bebidas, temos os seguintes itens" << endl;
    
        for (int i = 0; i < Bebidas.size(); i++)
        {
            cout << "item " << Bebidas[i] << " no valor de: " << vBebidas[i] << endl;
            wait(2);
        }

    cout << "qual item voce deseja?(digite 4 para voltar)" << endl;
    cin >> item;
        if (item == 1)
        {
            cout << "voce adicionou uma coca cola no valor de 3$ na sua sacola!" << endl;
            Cesta.push_back(Bebidas[0]);
            vCesta.push_back(vBebidas[0]);

            sacola();
            
        }
        if(item == 2){

            cout << "voce adicionou um guarana no valor de 4 reais na sua sacola!" << endl;
            Cesta.push_back(Bebidas[1]);
            vCesta.push_back(vBebidas[1]);

            sacola();
        }
        if(item == 3){

            cout << "voce adicionou uma pepsi no valor de 7 reais na sua sacola!" << endl;
            Cesta.push_back(Bebidas[2]);
            vCesta.push_back(vBebidas[2]);

            sacola();   
        }
        if(item == 4){
            break;
        }
        
    }//~ Fim Bebidas

    if (areaMenu == 2)
    {
        /* code */
    }
    

    if(areaMenu == 3){
        cout << "voce esta na area de sobremesas do menu, temos os seguintes itens" << endl;
        for (int i = 0; i < Sobremesas.size(); i++)
        {
           cout << "item " << Sobremesas[i] << " no valor de: " << vSobremesas[i] << endl;
           wait(1); 
        }

        cout << "qual item voce deseja?" << endl;
        cin >> item;

        if (item == 2)
        {
            cout << "item macaron foi adicionado a sua sacola no valor de 5 reais!" << endl;
            Cesta.push_back(Sobremesas[2]);
            vCesta.push_back(vSobremesas[2]);
            wait(2);
            sacola();
            system("pause");
        }
        
        
    }
    
    }


    cout << "LEAVING..." << endl;
    return 0; //^ Finishing main function
}