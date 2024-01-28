#include <algorithm>
#include <cctype>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <locale.h>
#include <random>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <Windows.h>

using namespace std;

int main(){

    ifstream input("Log.txt");

    string textoLido;

    for (string line; getline(input, line);)
    {
      textoLido += line; 
    }
    
    cout << textoLido;

}