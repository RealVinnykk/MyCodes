#include <iostream> // Input e output nas coisa 
#include <locale.h> //Importa os acentos KKKKKk
#include <queue> // Adicionar os dados nas arrays 
/*Sera que isso funciona pra krl?
nome : vivnny*/

int main(){

    setlocale(LC_ALL, "Portuguese");


    // std::string medicine[] = {}; 
    std::string name;
    std::string archiveName;

    
    std::cout << "Digite seu nome: ";
    getline(std::cin, name);
    std::cout << name << std::endl;

    system("pause");

    return 0;

}