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



long long CODPROD;


int main(){
string VendasDia = "vendas-" + to_string(dia) +"-"+ to_string(mes) +".txt";
ofstream Vendas;
Vendas.open(VendasDia, std::ios_base::app);

if (!Vendas.is_open()) {
        cerr << "Failed to open file: " << VendasDia << endl;
        return 1; // Exit if the file cannot be opened
}

vector<Product> Produtos;

Produtos.push_back(Product(7896049528604, 10, "Herbissimo"));
Produtos.push_back(Product(7908077450632, 5, "Agenda"));
Produtos.push_back(Product(7896806700069, 7, "Talco"));
Produtos.push_back(Product(6972983059761, 150, "Fone de ouvido"));


bool encontrou = false;
bool pedindo = false;
int vendaTotal;
string NOMEVENDEDOR;
string cadastrarCliente;

pedindo = true;

int hora = localTime->tm_hour;
int minuto = localTime->tm_min;



cout << "digite seu nome para comecar o atendimento!" << endl;
cin >> NOMEVENDEDOR;


cout << "Deseja identificar o cliente?" << endl;
cin >> cadastrarCliente;


if(cadastrarCliente == "sim"){


string nomeCliente;
long cpfCliente;
	cout << "Informe o nome do cliente:";
	cin >> nomeCliente;


	cout << "Informe o CPF do cliente:";
	cin >> cpfCliente;
	

	string novoCadastro = nomeCliente + ".txt";
	
	ofstream ClienteNovo;
	ClienteNovo.open(novoCadastro, std::ios_base::app);
	ClienteNovo << "Cliente: " <<  nomeCliente << endl;
	ClienteNovo << " cadastrado com CPF : " << cpfCliente << endl;
Vendas << "Abrindo ticket de venda as : " << hora << ":" << minuto << " horas" << endl;
Vendas << "Vendedor : " << NOMEVENDEDOR << endl;
	while (pedindo == true)
{



cout << " insira o codigo do produto:" << endl;
cin >> CODPROD;

int comprasCliente;
for (int i = 0; i < Produtos.size(); i++)
{

	if (Produtos[i].encontrarCOD(CODPROD) == true )
	{
	
		cout << "produto " << Produtos[i].Nome << " no valor de " << Produtos[i].Valor << " Reais foi vendido!" << endl;
		Vendas << "Produto COD : " << CODPROD << endl;
		Vendas << "Nome : " << Produtos[i].Nome << endl;
		Vendas << "Valor : " << Produtos[i].Valor << endl;
		Vendas << "Horario de venda do produto : " << hora << ":" << minuto << endl;
		Vendas << "=====----------=====" << endl;
		
		ClienteNovo << "Item " << Produtos[i].Nome << " adicionado ao historico do cliente!" << endl;
	        comprasCliente += Produtos[i].Valor;	

		vendaTotal += Produtos[i].Valor;	
		cin.ignore();


		break;
		}
	
}

if(cin.fail()){
	ClienteNovo << "Valor total das compras do cliente : " << comprasCliente << endl;
	ClienteNovo.close();
	Vendas << " " << endl;
	Vendas << "=====----------=====" << endl;
	Vendas << "Fechando vendas horario : " << hora << ":" << minuto << endl;
	Vendas << "Vendas Totais do turno: " << vendaTotal  << "$" << endl;
	Vendas << "=====---------=====" << endl;
	Vendas << "  " << endl;
	Vendas.close();
	cin.ignore();

break;
}


}
}
Vendas << "Abrindo ticket de venda as : " << hora << ":" << minuto << " horas" << endl;
Vendas << "Vendedor : " << NOMEVENDEDOR << endl;

while (pedindo == true)
{

cout << " insira o codigo do produto:" << endl;
cin >> CODPROD;

for (int i = 0; i < Produtos.size(); i++)
{

	if (Produtos[i].encontrarCOD(CODPROD) == true )
	{
	
		cout << "produto " << Produtos[i].Nome << " no valor de " << Produtos[i].Valor << " Reais foi vendido!" << endl;
		Vendas << "Produto COD : " << CODPROD << endl;
		Vendas << "Nome : " << Produtos[i].Nome << endl;
		Vendas << "Valor : " << Produtos[i].Valor << endl;
		Vendas << "Horario de venda do produto : " << hora << ":" << minuto << endl;
		Vendas << "=====----------=====" << endl;
		


		vendaTotal += Produtos[i].Valor;	
		cin.ignore();


		break;
		}
	
}

if(cin.fail()){
	Vendas << " " << endl;
	Vendas << "=====----------=====" << endl;
	Vendas << "Fechando vendas horario : " << hora << ":" << minuto << endl;
	Vendas << "Vendas Totais do turno: " << vendaTotal  << "$" << endl;
	Vendas << "=====---------=====" << endl;
	Vendas << "  " << endl;
	Vendas.close();

break;
}


}

cout << "SAINDO" << endl;
cin.get();


// end of main
}




