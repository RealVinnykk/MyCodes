#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

bool criarCarro(string quer){
    if(quer == "Y" || "y"){
        return true;
    }else{
        return false;
    }
}

void wait(int sec){
    Sleep(sec);
}

vector<string> carro;

int main(){

    bool querCarro;
    string colocarCarro;    
    string marcaCarro;

    cout << "deseja colocar carros na lista?(Y/N): ";
    cin >> colocarCarro;    

    querCarro = criarCarro(colocarCarro);

    
    
    

    while(querCarro == true){
        cout << "Digite o nome do carro para colocar, digite listar para ver os carros ate o momento: ";
        cin >> marcaCarro;
        
        if (marcaCarro != "listar")
        {
            carro.push_back(marcaCarro);
            wait(2);
        cout << "digite sair para sair" << endl;
        wait(1);
        }else{
            for (int i = 0; i < carro.size(); i++)
            {
                cout << "carro " << i << " - " << carro[i] << endl;
            }
            
        }

        if(marcaCarro == "sair"){
            break;
        }




    }

    return 0;
}