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
#include <windows.h>

using namespace std;


void wait(int sec){
	Sleep(sec);
}

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

int pegarValor(){
	return Valor;
}

};

vector<Product> Produtos;


ofstream teste(const string& novoCadastro){


string nomeCliente;
long cpfCliente;
	cin.ignore();
	cout << "Informe o nome do cliente(primeiro e ultimo):";
	getline(cin, nomeCliente);	


	cout << "Informe o CPF do cliente:";
	cin >> cpfCliente;
	cin.clear();

		nomeCliente = nomeCliente + ".txt";	
	
	ofstream ClienteNovo(nomeCliente, std::ios::out | std::ios::trunc);	
	ClienteNovo << "Cliente: " <<  nomeCliente << endl;
	ClienteNovo << " cadastrado com CPF : " << cpfCliente << endl;

return ClienteNovo;
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
string metodoPagamento;

Produtos.push_back(Product(7891253264157, 25, "Caderno"));
Produtos.push_back(Product(7896049528604, 10, "Herbissimo"));
Produtos.push_back(Product(7908077450632, 5, "Agenda"));
Produtos.push_back(Product(7896806700069, 7, "Talco"));
Produtos.push_back(Product(6972983059761, 150, "Fone de ouvido"));
Produtos.push_back(Product(7898964526123, 15, "Manteiga"));
Produtos.push_back(Product(7908262910620, 5, "Pericles"));

if (!Vendas.is_open()) {
        cerr << "Failed to open file: " << VendasDia << endl;
        return 1; // Exit if the file cannot be opened
}


bool encontrou = false;
bool pedindo = false;
int vendaTotal = 0;
string NOMEVENDEDOR;
string comprasCliente;
pedindo = true;

int hora = localTime->tm_hour;
int minuto = localTime->tm_min;



cout << "digite seu nome para comecar o atendimento!" << endl;
cin >> NOMEVENDEDOR;


string cadastrarCliente;
cout << "deseja cadastrar o cliente?:";
cin >> cadastrarCliente;

ofstream ClienteNovo = teste(cadastrarCliente);

Vendas << "Abrindo ticket de venda as : " << hora << ":" << minuto << " horas" << endl;
Vendas << "Vendedor : " << NOMEVENDEDOR << endl;

cout << "Forma de pagamento: ";
cin >> metodoPagamento;


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


		// COMANDOS << "INSERT vendas01 values (\"" <<Produtos[i].Nome <<"\"," << Produtos[i].Valor <<", \"" << hora << ":" <<minuto <<"\", \"" << metodoPagamento << "\");"   << endl;
		

		ClienteNovo << " comprou " << Produtos[i].Nome << " no valor de " << Produtos[i].Nome << " as " << hora << "|" << minuto << " horas" << endl;
		
		vendaTotal += Produtos[i].Valor;
		cin.ignore();	
		cin.clear();

		break;
		}
//^ tentando arrumar o print e adição do valor em @vendaTotal	

}

if(cin.fail()){
	wait(1);	
cout << "Valor a ser cobrado: " << vendaTotal << endl; 
	
break;
}


}
	Vendas << " " << endl;
	Vendas << "=====----------=====" << endl;
	Vendas << "Fechando vendas horario : " << hora << ":" << minuto << endl;
	Vendas << "Vendas Totais do turno: " << vendaTotal << "$" << endl;
	Vendas << "=====---------=====" << endl;
	Vendas << "  " << endl;
	Vendas.close();	
Vendas << " Pagamento foi efetuado como : " << metodoPagamento << endl;
cout << "SAINDO" << endl;


wait(1);
// end of main

}

//please add new SQL to upload orders




