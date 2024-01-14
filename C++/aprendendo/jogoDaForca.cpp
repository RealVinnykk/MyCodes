#include <algorithm>
#include <iomanip>
#include <cctype>
#include <Windows.h>
#include <iostream>
#include <string.h>
#include <random>
#include <list>
#include <vector>
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
int main(){

   bool palavraAdivinhou = false;

   while (palavraAdivinhou == false)
   {
      string palavra;
      char adivinhar;
      vector<string> palavraEscolhida;
    vector<char> palavraSecreta;
    auto achou = find(palavraEscolhida.begin(), palavraEscolhida.end(), adivinhar);
    cout << " Informe a palavra a ser adivinhada" << endl;
    cin >> palavra;
    wait(2);
    for (int i = 0; i < palavra.length(); i++)
    {
       palavraEscolhida.insert(palavraEscolhida.end(), palavra);
       palavraSecreta.push_back('_');
      
    }

    cout << "a palavra foi escolhida..." << endl;
    wait(3);

    for (int i = 0; i < palavraEscolhida.size(); i++)
    {
       cout << "_";
    }

    cout << "" <<  endl;

   adivinharLetra:
   
    cout << "digite uma letra!" << endl;
    cin >> adivinhar;

   if (palavra.find(adivinhar) == true )
   {

   }
      


   
   
   
      

   }
   
    
        
}