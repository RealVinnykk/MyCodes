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


void wait(int sec){
	std::this_thread::sleep_for(std::chrono::seconds(sec));
}


class Student{
    public:
    int Money;
    string Address;
    int Age;
    string Name;


    Student(string nome, int idade, string Endereco){
        Age = idade;
        Name = nome;
        Address = Endereco;
    };

    void sayName(){
        cout << "Hello, my name is" << Name << "!" << endl;
    }

    void sayAge(){
        cout << "Hello, i'am " << Age << " Years old! " << endl;
    }

    void defAddress(){
    string aonde;
    getline(cin, aonde);  
    Address = aonde;
    }

    void sayAddress(){
        cout << "My address is at" << Address << endl;
    }

};

void sayAll(const Student& test){


        cout << "Name: " << test.Name << endl;
        cout << "Age: " << test.Age << endl;
        cout << "Address: " << test.Address << endl;


}
int main(){

    Student Aluno("null", 0, "null"); 

    auto start = std::chrono::steady_clock::now();

    string PrimeiroNome;
    cout << "Registrando Aluno!" << endl;
    cout << "Primeiro nome: ";
    cin >> PrimeiroNome;
cin.ignore();
    cout << "Nome Completo: "; 
    getline(cin, Aluno.Name);
	

    cout << "Idade: ";
    cin >> Aluno.Age;

    int registered = (rand() % 90000 + 10000) * Aluno.Age * 7;
    string randomNumber = to_string(registered);

    cout <<"Endereço: ";
    cin.ignore();
    Aluno.defAddress();

    wait(1);

    string ALUNONOVO = PrimeiroNome + ".txt";
    ofstream arquivoNovo;
    arquivoNovo.open(ALUNONOVO, std::ios_base::app);

    string comando = "mv " + ALUNONOVO + " ." + ALUNONOVO;
    int result = system(comando.c_str());

    arquivoNovo << "Nome do aluno: " << Aluno.Name << endl;
    arquivoNovo << "Idade do aluno: " << Aluno.Age << endl;
    arquivoNovo << "Endereço registrado: " << Aluno.Address << endl;
    arquivoNovo << "Matricula do aluno: " << randomNumber << endl;

    auto end = std::chrono::steady_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::seconds>(end - start);

	cout << "	Aluno registrado com sucesso!	" << endl;

    cout << "tempo total de execução do programa: " << duration.count() << " Segundos" << endl;

    cout << "Pressione ENTER para finalizar o programa" << endl;
    cin.ignore();
 




    return 0; //* End of main function
} 
