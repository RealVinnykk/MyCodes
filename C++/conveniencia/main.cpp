#include <algorithm>
#include <iomanip>
#include <cctype>
#include <iostream>
#include <fstream>
#include <random>
#include <list>
#include <chrono>
#include <thread>
#include <vector>
#include <string.h>
#include <locale.h>
#include <cstdlib>

using namespace std;

class Product{
	public:
long long COD;
string Nome;
int Valor;


Product(long long COD, int Valor, string nome){
	Nome = nome;
	Valor = Valor;
	COD = COD;
}

};




long long CODPROD;


int main(){

vector<Product> Produtos;
Produtos.push_back(Product(7896049528604, 10, "Herbissimo"));

cout << " insira o codigo do produto:" << endl;
cin >> CODPROD;


cout << "enter para sair" << endl;
cin.get();


// end of main
}
