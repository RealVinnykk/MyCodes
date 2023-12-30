#include <iostream>
#include <random>
#include <list>
#include <locale.h>
#include <windows.h>

using namespace std;

void wait(int(sec)){


    while (sec > 0)
    {
         cout << "A area ira sair em " << sec << " segundos\r";
         Sleep(1000);
         sec--;
    }
    
    cout << "Saindo da area...\n";

} 

int main(){

    return 0;
}