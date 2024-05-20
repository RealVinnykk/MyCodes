#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

	string NomeAluno;
	cout << "informe o nome do aluno a ser listado : ";
	cin >> NomeAluno;

	string lerArquivo = NomeAluno +  ".txt";
	ifstream arquivoLer(lerArquivo);

	if(!arquivoLer.is_open()){
	cerr << "Erro, nao foi possivel encontrar o aluno " << NomeAluno << endl;
	return 1;
	}

	string Linha;
	while(getline(arquivoLer, Linha)){
		cout << Linha << endl;
	}

	arquivoLer.close();


	return 0; // end of main function
}
