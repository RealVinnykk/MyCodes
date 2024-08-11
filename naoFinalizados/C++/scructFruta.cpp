#include <stdio.h>
#include <string>
#include <iostream>
#include <new>
#include <cctype>
#include <Windows.h>
#include <iostream>
#include <random>
#include <string.h>
#include <list>
#include <locale.h>

using namespace std;

struct fruta{
    string cor;
    string nome;
};

int main(){

    fruta *primeiraFruta = new fruta;
    primeiraFruta->cor = "Rosa";
    primeiraFruta->nome = "Real";

    cout << primeiraFruta->nome << " De cor " << primeiraFruta->cor << endl;
    // uma caralhada de fruta
    fruta  *pListaDeFrutas = new fruta[2];

    pListaDeFrutas[0].cor = "Laranja";
    pListaDeFrutas[0].nome = "Laranja";
    pListaDeFrutas[1].cor = "Vermelho";
    pListaDeFrutas[1].nome = "Maca";

    for (int i = 0; i < 2; i++)
    {
        cout << "Nome da fruta: " << pListaDeFrutas[i].nome << " cor da fruta " << pListaDeFrutas[i].cor << endl;
    }
    

}