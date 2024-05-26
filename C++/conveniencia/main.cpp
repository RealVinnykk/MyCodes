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


Product(long long codigo, int preco, string nome){
	Nome = nome;
	Valor = preco;
	COD = codigo;
}

bool encontrarCOD(long long codigin){
	
	if (codigin == COD)
	{
		return true;	
	}else{
		return false;
	}
	
}

};

void wait(int sec){
	std::this_thread::sleep_for(std::chrono::seconds(sec));
}

auto tempo = std::chrono::system_clock::now();

std::time_t currentTime = std::chrono::system_clock::to_time_t(tempo);

std::tm* localTime = std::localtime(&currentTime);

int dia = localTime->tm_mday;
int mes = localTime->tm_mon + 1;
int ano = localTime->tm_year;
int hora = localTime->tm_hour;
int minuto = localTime->tm_min;

long long CODPROD;


int main(){

string DataVenda = "Vendas dia " + to_string(dia) + "/" + to_string(mes) + ".txt";
ofstream Vendas;
Vendas.open(DataVenda, std::ios_base::app);

vector<Product> Produtos;
Produtos.push_back(Product(7896049528604, 10, "Herbissimo"));
Produtos.push_back(Product(7908077450632, 5, "Agenda"));
Produtos.push_back(Product(7896806700069, 7, "Talco"));

vector<string> Cesta;
vector<int> valor;
int ValorTotal;


bool encontrou = false;
bool pedindo = false;

pedindo = true;

while (pedindo == true)
{

cout << " insira o codigo do produto:" << endl;
cin >> CODPROD;

for (int i = 0; i < Produtos.size(); i++)
{

	if (Produtos[i].encontrarCOD(CODPROD) == true )
	{

		Cesta.push_back(Produtos[i].Nome);
		valor.push_back(Produtos[i].Valor);
		cout << "produto " << Produtos[i].Nome << " no valor de " << Produtos[i].Valor << " Reais foi vendido!" << endl;
		Vendas << "Produto " << Produtos[i].Nome << " Valor " << Produtos[i].Valor << " Horario " << hora << ":" << minuto << endl;
		wait(1);
		cin.ignore();

		break;
		}
	
}

if(cin.fail()){

	Vendas.close();

break;
}


}

cout << "enter para sair" << endl;
cin.get();


// end of main
}
