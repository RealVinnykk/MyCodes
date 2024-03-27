#include <algorithm>
#include <iomanip>
#include <cctype>
#include <iostream>
#include <string.h>
#include <random>
#include <list>
#include <vector>
#include <locale.h>
#include <chrono>
#include <thread>
#include <fstream>
#include "AdicionalNoUse1.h"

using namespace std;


//Trying to create a new version of login code


void wait(int sec){

	std::this_thread::sleep_for(std::chrono::seconds(sec));

};

void menu(){
	cout << "-- Menu do sistema --" << endl;
	cout << "1. Financeiro" << endl;
	cout << "2. Armazenamento" << endl;
	cout << "3. Funcionarios" << endl;
	cout << "-- === FIM === --" << endl;
	cout << "Aonde você seja ir?" << endl;
}

string nomeUsuario;
string senhaUsuario;
int contaPassada;

int main(){

	

	cout << names[1] << endl;
	string conta;
	cout << "Voce deseja fazer login?(Y/N): " << endl; 
	cin >> conta;
	bool login = true;
	while(login == true){
		for(int i; i = 0; i < conta.length()){
			conta[i] = toupper(conta[i]);
		};
		if(conta == "Y"){
			cout << "infome seu nome de usuario: ";
			cin >> nomeUsuario;
			if(nomeUsuario == names[0]){
				contaPassada = 0;
								
			cout << "bem vindo " << names[contaPassada] << endl;
			cout << "infome sua senha: ";
			cin >> senhaUsuario;
			if(senhaUsuario == passwords[contaPassada]){
				cout << "login feito com sucesso!" << endl;
				wait(1);
				cout << "carregando recursos" << endl;	
			}else{
				cout << "senha incorreta" << endl;
				break;	
			}


			}else if(nomeUsuario == names[1]){
				contaPassada = 1;

			cout << "bem vindo " << names[contaPassada] << endl;
			cout << "infome sua senha: ";
			cin >> senhaUsuario;
			if(senhaUsuario == passwords[contaPassada]){
				cout << "login feito com sucesso!" << endl;
				wait(1);
				cout << "carregando recursos" << endl;	
			}else{
				cout << "senha incorreta" << endl;
				break;	
			}
			}else if(nomeUsuario == names[2]){
				contaPassada = 2;

			cout << "bem vindo " << names[contaPassada] << endl;
			cout << "infome sua senha: ";
			cin >> senhaUsuario;
			if(senhaUsuario == passwords[contaPassada]){
				cout << "login feito com sucesso!" << endl;
				wait(1);
				cout << "carregando recursos" << endl;	
			}else{
			cout << "senha incorreta" << endl;
				break;	
			}
			}else{
	cout << "seu nome de usuario não foi encontrado na base de dados, estaremos criando uma nova conta!" << endl;
	names.push_back(nomeUsuario);
	
wait(2);
	string verificarSenha;

	bool criandoSenha = true;

	while(criandoSenha == true){

	cout << "crie uma senha: ";
	cin >> senhaUsuario;
	wait(2);
	cout << "confirme sua senha: ";
	cin >> verificarSenha;

	if(verificarSenha == senhaUsuario){
	cout << "conta criada com sucesso!" << endl;
	break;
	passwords.push_back(senhaUsuario);
}else{
continue;
}


}
}
	bool logado = true;
cout << "voce fez login..." << endl;
	while (logado == true){
	int area;

	
	menu();
	cin >> area;
		int back;
	if(area == 1){
		int areaFinanceiro;
	cout << "voce entrou na area de financeiro do sistema, temos os seguintes aspectos" << endl;
	wait(1);
	cout << "1. Pagamentos de Funcionários" << endl;
	wait(1);
	cout << "2. Pagamentos de Serviços" << endl;
	wait(1);
	cout << "3. Orçamentos Disponiveis" << endl;
	wait(1);
	cout << "-----===========-----" << endl;
	cout << "aonde voce deseja ir? ( ENTER 0 PARA VOLTAR) " << endl;
	cin >> areaFinanceiro;

	if(areaFinanceiro == 1){
	cout << "voce entrou na area de Pagamentos de Funcionarios!" << endl;
	wait(0.7);
	cout << "aqui voce podera ver o valor pago para cada funcionario" << endl;
	wait(0.7);
	cout << " -----==========-----" << endl;
	wait(0.7);
	cout << "Funcionario : Roberto" << endl;
	wait(0.7);
	cout << "Cargo : Auxiliar Back-End" << endl;
	wait(0.7);
	cout << "Salario : 110 mil / Ano" << endl;
	wait(0.7);
	cout << "-----===========-----" << endl;
	wait(0.7);
	cout << "Funcionario : Carla" << endl;	
	wait(0.7);
	cout << "Cargo : Auxiliar Front-End" << endl;
	wait(0.7);
	cout << "Salario : 110 mil / Ano" << endl;
	wait(0.7);
	cout << "digite qualquer caractere para voltar ao menu financeiro" << endl;
	cin >> back;
	if(cin){
continue;
}
}else if(areaFinanceiro == 2){
	cout << "voce entrou na area de Pagamentos de Serviço!" << endl;
	wait(1);

}
	}
}


			// end of login loop
		}
}


		return 0;

	}
