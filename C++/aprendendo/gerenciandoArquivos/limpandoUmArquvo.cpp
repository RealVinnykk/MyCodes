#include <algorithm>
#include <iomanip>
#include <fstream>
#include <cctype>
#include <Windows.h>
#include <iostream>
#include <string.h>
#include <random>
#include <list>
#include <vector>
#include <locale.h>

using namespace std;

int main(){

    ofstream arquivoDeSaida;

    arquivoDeSaida.open("Log.txt");

arquivoDeSaida << ""; 

    arquivoDeSaida.close();

}