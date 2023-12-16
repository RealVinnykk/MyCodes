#include <iostream>
#include <locale.h> //Importa os acentos KKKKKk
/*Sera que isso funciona pra krl?
nome : vivnny*/

int main(){



setlocale(LC_ALL, "");

int wallet = 15;
int value = 3;
std::string querComprar;


std::cout << "Você quer comprar o produto?"; 
std::cin >> querComprar;

if (querComprar == "S" || "s" || "Sim" || "sim")
{
    wallet - value;
    std::cout << "Você comprou o produto por " << value << " e agora tem apenas " << wallet << " Reais ";
}else {
    std::cout << "Usuário resolveu não comprar nenhum produto";
}





}