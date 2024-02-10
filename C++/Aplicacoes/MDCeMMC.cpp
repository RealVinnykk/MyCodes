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

int wait(int sec){ for(int i; i < sec, i++;){
    Sleep(1000);
}}

void operacoes(){
    cout << "temos as seguintes operações disponiveis: " << endl;
    cout << "1 - MDC ||| 2 - MMC" << endl;
}
int main(){
    int operacao;
    operacoes();
    cout << "diga a operação que voce deseja realizar: ";
    cin >> operacao;

    if (operacao == 1)
    {
        bool MDC = true;

        int numero;
        int* Pnumero = &numero;
        while(MDC == true){
        vector<int> numbers = {0};
        cout << "informe os numeros, para continuar informe proximo!: ";
        cin >> numero;
        if (isdigit(numero) == false)
        {
          numbers.push_back(numero); 
         for (int i = 0; i < numbers.size(); i++)
         {   
            cout << "numero " << i << " = "  << numbers[i] << endl; 
         }

        }else{
        
        
        } 

        } 
        
    }
    
    return 0;
}