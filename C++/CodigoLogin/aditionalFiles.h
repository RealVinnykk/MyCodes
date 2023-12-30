#include <Windows.h>
#include <iostream>
#include <random>
#include <list>
#include <locale.h>

using namespace std;

char pastUsers[5][50] = {"Joshua", "Kelvin", "Angela", "Carla", "ADMIN"};
char passwords[5][20] = {"320285", "573389", "880937", "979585", "ROOT"};


//^ Usefull waiting function 
void wait(int(sec)){


    while (sec > 0)
    {
         Sleep(1000);
         sec--;
    }
    cout << "                                                       \r";
}
