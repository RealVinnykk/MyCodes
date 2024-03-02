#include "classes.h"
#include <algorithm>
#include <iomanip>
#include <cctype>
#include <Windows.h>
#include <iostream>
#include <string.h>
#include <random>
#include <list>
#include <vector>
#include <locale.h>

using namespace std;

int valendo = 1;
string criarConta;
string operacao;
string qualOperacao;
string nome;
string lugar;
int i;
int idade;
int senha;
vector<string> cesta;
vector<int> cestaValor;
int valorTotal;
int numeroAleatorio = (rand() % 5);

Account conta = Account(nome, senha);
string Biscoito[2] = {"BISCOITO", "Alimento"};
double BiscoitoValor = 4;
string Skilho[2] = {"SKILHO", "Alimento"};
double SkilhoValor = 3;
string Pipoca[2] = {"PIPOCA", "Alimento"};
double PipocaValor = 3.5;
string Chocolate[2] = {"CHOCOLATE", "Alimento"};
double ChocolateValor = 5;
string Bolacha[2] = {"BOLACHA", "Alimento"};
double BolachaValor = 7;

double CocaValor = 4;
string Fanta[3] = {"FANTA UVA", "FANTA LARANJA", "Bebida"};
double FantaValor = 3;
string Pepsi[2] = {"PEPSI", "Bebida"};
double PepsiValor = 5;
string Guarana[2] = {"GUARANA", "Bebida"};
double GuaranaValor = 7;
string Sucos[4] = {"SUCO DE LARANJA", "SUCO DE UVA", "SUCO DE MORANGO", "Bebidas"};
double SucosValor[3] = {7, 6, 5};
string Energetico[3] = {"MONSTER", "RED BULL", "Bebida"};
double EnergeticoValor[2] = {4, 5};
string Agua[2] = {"AGUA", "Bebida"};
double AguaValor = 2;
string Nescau[2] = {"NESCAU", "Bebida"};
double NescauValor = 7;

string BomBom[2] = {"BOMBOM", "Guloseimas"};
double BombomValor = 1.5;
string Finni[2] = {"FINNI", "Guloseimas"};
double FinniValor = 4.50;
string BarraCereal[3] = {"BARRA DE CEREAL SABOR MORANGO", "BARRA DE CEREAL SABOR CHOCOLATE", "BARRA DE CEREAL SABOR BANANA"};
double BarraValor[3] = {3, 5, 4};
string Jujuba[2] = {"JUJUBA", "Guloseimas"};
double JujubaValor = 4;
string MEM[2] = {"M&M", "Guloseimas"};
double MEMValor = 5;


//^ menu principal para escolha do lugar que o cara quer visitar
int menuPrincipal()
{
    for (i = 0; i < 1; i++)
    {

        cout << "--===================--" << endl;
        cout << "--===================--" << endl;
        cout << "-===== Bem Vindo =====-" << endl;
        cout << " " << endl;
        cout << "=- Banco -=" << endl;
        cout << "=- Conveniencia -=" << endl;
        cout << "=- Bar -=" << endl;
        cout << "--===================--" << endl;
        cout << "--===================--" << endl;
        cout << "Aonde voce deseja ir?" << endl;
    }

    return 0;
}
//^ caso o usuario queira ir no bar
int irNoBar()
{

entrouBar:
    string qual;
    int cachaca = 15;
    int vodka = 9;
    int cerveja = 4;
    cout << "voce entrou no bar..." << endl;
    cout << "--====================--" << endl;
    cout << "voce tem as seguintes escolhas de bebidas:" << endl;
    cout << "Cachaca : $" << cachaca << endl;
    cout << "Vodka : $" << vodka << endl;
    cout << "Cerveja : $" << cerveja << endl;
    cout << "--===================--" << endl;
    cout << "qual bebida voce quer comprar ?" << endl;
    cout << "caso queira sair digite sair." << endl;
    cin >> qual;

    for (i = 0; i < qual.length(); i++)
    {

        qual[i] = toupper(qual[i]);
    }
    i = 0;

    if (qual == "VODKA" && conta.balance > vodka && conta.openAccount == 1)
    {

        conta.balance -= vodka;
        cout << "voce comprou uma vodka por " << vodka << " e agora tem " << conta.balance << " reais restantes" << endl;
        system("pause");
        system("CLS");
        goto entrouBar;
    }
    else if (qual == "VODKA" && conta.balance < vodka && conta.openAccount == 1)
    {

        cout << "Voce nao tem dinheiro o suficiente para comprar esta bebida, crie uma conta no banco e realize um deposito para poder comprar!" << endl;
        goto entrouBar;
    }

    if (qual == "CACHACA" && conta.balance > cachaca && conta.openAccount == 1)
    {

        conta.balance -= cachaca;
        cout << "voce comprou uma cachaca por " << cachaca << " e agora tem " << conta.balance << " reais restantes" << endl;
        system("pause");
        system("CLS");
        goto entrouBar;
    }
    else if (qual == "CACHACA" && conta.balance < cachaca && conta.openAccount == 1)
    {

        cout << "Voce nao tem dinheiro o suficiente para comprar esta bebida, crie uma conta no banco e realize um deposito para poder comprar!" << endl;
        goto entrouBar;
    }

    if (qual == "CERVEJA" && conta.balance > cerveja && conta.openAccount == 1)
    {

        conta.balance -= cerveja;
        cout << "voce comprou uma cerveja por " << cerveja << " e agora tem " << conta.balance << " reais restantes" << endl;
        system("pause");
        system("CLS");
        goto entrouBar;
    }

    else if (qual == "CERVEJA" && conta.balance > cerveja && conta.openAccount == 1)
    {

        cout << "Voce nao tem dinheiro o suficiente para comprar esta bebida, crie uma conta no banco e realize um deposito para poder comprar!" << endl;
        system("PAUSE");
        system("CLS");
        goto entrouBar;
    }

    if (qual == "SAIR")
    {

        cout << "voce escolheu sair do bar" << endl;
        system("pause");
        return 0;
    }
    else
    {

        cout << "por favor informe uma bebida valida!" << endl;
        system("pause");
        goto entrouBar;
    }

    return 0;
}

int irNaConv()
{

entrouConveniencia:

    string qualCorredor = "";
    string *irCorredor = &qualCorredor;

    if (qualCorredor == "")
    {

    corredorPrincipal:

        cout << "voce entrou na conveniencia qual corredor voce quer ir?" << endl;
        cout << "--====================--" << endl;
        cout << "Alimento" << endl;
        cout << "Bebidas" << endl;
        cout << "Guloseimas" << endl;
        cout << "Caixa" << endl;
        cout << "--===================--" << endl;
        cout << "caso queira sair digite sair ou digite cesta para ver sua cesta de compras!." << endl;
        cin >> *irCorredor;

        for (i = 0; i < qualCorredor.length(); i++)
        {

            qualCorredor[i] = toupper(qualCorredor[i]);
        }
        i = 0;

        if (*irCorredor == "ALIMENTO")
        {

            //^ Corredor alimentos

        corredorAlimentacao:
            string qualAlimento;
            cout << "voce esta no corredor de alimentação, temos os seguintes itens disponiveis para compra" << endl;
            cout << "|" << Biscoito[0] << "|"
                 << "Valor =  " << BiscoitoValor << "$ "
                 << "|" << endl;
            cout << "|" << Skilho[0] << "|"
                 << "Valor =  " << SkilhoValor << "$ "
                 << "|" << endl;
            cout << "|" << Pipoca[0] << "|"
                 << "Valor =  " << PipocaValor << "$ "
                 << "|" << endl;
            cout << "|" << Chocolate[0] << "|"
                 << "Valor =  " << ChocolateValor << "$ "
                 << "|" << endl;
            cout << "|" << Bolacha[0] << "|"
                 << "Valor =  " << BolachaValor << "$ "
                 << "|" << endl;
            cout << "-===================-" << endl;

            cout << "-===================-" << endl;
            cout << "Fim dos itens do corredor de alimentação, se voce deseja comprar algo digite o nome do produto, caso queira voltar digite voltar" << endl;
            cin >> qualAlimento;
            for (i = 0; i < qualAlimento.length(); i++)
            {

                qualAlimento[i] = toupper(qualAlimento[i]);
            }
            i = 0;

            if (qualAlimento == "BISCOITO")
            {
                cesta.insert(cesta.end(), Biscoito[0]);
                cestaValor.insert(cestaValor.end(), BiscoitoValor);
                cout << "Voce adicionou um biscoito na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorAlimentacao;
            }

            if (qualAlimento == "SKILHO")
            {

                cesta.insert(cesta.end(), Skilho[0]);
                cestaValor.insert(cestaValor.end(), SkilhoValor);
                cout << "Voce adicionou um skilho na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorAlimentacao;
            }

            if (qualAlimento == "PIPOCA")
            {

                cesta.insert(cesta.end(), Pipoca[0]);
                cestaValor.insert(cestaValor.end(), PipocaValor);
                cout << "Voce adicionou uma pipoca na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorAlimentacao;
            }

            if (qualAlimento == "CHOCOLATE")
            {

                cesta.insert(cesta.end(), Chocolate[0]);
                cestaValor.insert(cestaValor.end(), ChocolateValor);
                cout << "Voce adicionou um chocolate na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorAlimentacao;
            }

            if (qualAlimento == "BOLACHA")
            {

                cesta.insert(cesta.end(), Bolacha[0]);
                cestaValor.insert(cestaValor.end(), BolachaValor);
                cout << "Voce adicionou uma bolacha na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorAlimentacao;
            }

            if (qualAlimento == "VOLTAR")
            {

                system("CLS");
                goto corredorPrincipal;
            }

            else
            {

                cout << "digite um produto valido ou digite VOLTAR para ir ao corredor principal" << endl;
                goto corredorAlimentacao;
            }
        }

        if (*irCorredor == "BEBIDAS")
        {

            //^ Corredor Bebidas
            string qualBebida;
            string Coca[2] = {
                "COCA COLA",
                "Bebida",
            };

        corredorBebidas:
            cout << "voce esta no corredor de bebidas, temos os seguintes itens disponiveis para compra" << endl;
            cout << "|" << Coca[0] << "|"
                 << " Valor = " << CocaValor << endl;
            cout << "|" << Fanta[0] << "|"
                 << " Valor = " << FantaValor << endl;
            cout << "|" << Fanta[1] << "|"
                 << " Valor = " << FantaValor << endl;
            cout << "|" << Sucos[0] << "|"
                 << " Valor = " << SucosValor[0] << endl;
            cout << "|" << Sucos[1] << "|"
                 << " Valor = " << SucosValor[1] << endl;
            cout << "|" << Sucos[2] << "|"
                 << " Valor = " << SucosValor[2] << endl;
            cout << "|" << Energetico[0] << "|"
                 << " Valor = " << EnergeticoValor[0] << endl;
            cout << "|" << Energetico[1] << "|"
                 << " Valor = " << EnergeticoValor[1] << endl;
            cout << "|" << Agua[0] << "|"
                 << " Valor = " << AguaValor << endl;
            cout << "|" << Nescau[0] << "|"
                 << " Valor = " << NescauValor << endl;
            cout << "-===================-" << endl;
            cout << "-===================-" << endl;
            cout << "Fim dos itens do corredor de bebidas, se voce deseja comprar algo digite o nome do produto, caso queira voltar digite voltar" << endl;
            getline(cin, qualBebida);
            for (i = 0; i < qualBebida.length(); i++)
            {

                qualBebida[i] = toupper(qualBebida[i]);
            }
            i = 0;

            if (qualBebida == "COCA-COLA" || qualBebida == "COCA COLA")
            {

                cesta.insert(cesta.end(), Coca[0]);
                cestaValor.insert(cestaValor.end(), CocaValor);
                cout << "Voce adicionou uma Coca-Cola na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorBebidas;
            }

            if (qualBebida == "PEPSI")
            {

                cesta.insert(cesta.end(), Pepsi[0]);
                cestaValor.insert(cestaValor.end(), PepsiValor);
                cout << "Voce adicionou uma Pepsi na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorBebidas;
            }

            if (qualBebida == "GUARANA")
            {

                cesta.insert(cesta.end(), Guarana[0]);
                cestaValor.insert(cestaValor.end(), GuaranaValor);
                cout << "Voce adicionou um Guarana na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorBebidas;
            }
            if (qualBebida == "AGUA")
            {

                cesta.insert(cesta.end(), Agua[0]);
                cestaValor.insert(cestaValor.end(), AguaValor);
                cout << "Voce adicionou uma Agua na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorBebidas;
            }

            if (qualBebida == "SUCO DE LARANJA")
            {

                cesta.insert(cesta.end(), Sucos[0]);
                cestaValor.insert(cestaValor.end(), SucosValor[0]);
                cout << "Voce adicionou um Suco de Laranja na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorBebidas;
            }

            if (qualBebida == "SUCO DE MORANGO")
            {

                cesta.insert(cesta.end(), Sucos[2]);
                cestaValor.insert(cestaValor.end(), SucosValor[2]);
                cout << "Voce adicionou um Suco de Morango na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorBebidas;
            }

            if (qualBebida == "SUCO DE UVA")
            {

                cesta.insert(cesta.end(), Sucos[1]);
                cestaValor.insert(cestaValor.end(), SucosValor[1]);
                cout << "Voce adicionou um Suco de Uva  na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorBebidas;
            }

            if (qualBebida == "MONSTER")
            {

                cesta.insert(cesta.end(), Energetico[1]);
                cestaValor.insert(cestaValor.end(), EnergeticoValor[1]);
                cout << "Voce adicionou uma Monster na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorBebidas;
            }

            if (qualBebida == "RED BULL" || qualBebida == "RED-BULL")
            {

                cesta.insert(cesta.end(), Energetico[0]);
                cestaValor.insert(cestaValor.end(), EnergeticoValor[0]);
                cout << "Voce adicionou uma Red-Bull na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorBebidas;
            }

            if (qualBebida == "NESCAU")
            {

                cesta.insert(cesta.end(), Nescau[0]);
                cestaValor.insert(cestaValor.end(), NescauValor);
                cout << "Voce adicionou um Nescau na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorBebidas;
            }

            if (qualBebida == "VOLTAR")
            {
                cout << "Voltando ao corredor principal" << endl;
                wait(2);
                goto corredorPrincipal;
            }

            else
            {

                cout << "Informe um produto valido!" << endl;
                system("Pause");
                system("CLS"); // tempo
                goto corredorBebidas;
            }
        }

        if (*irCorredor == "GULOSEIMAS")
        {

            string qualGuloseima;
            //^ Corredor guloseimas

        corredorGuloseima:
            cout << "voce esta no corredor de guloseimas, temos os seguintes itens disponiveis para compra" << endl;
            cout << "|" << BomBom[0] << "|"
                 << " Valor = " << BombomValor << endl;
            cout << "|" << Finni[0] << "|"
                 << " Valor = " << FinniValor << endl;
            cout << "|" << BarraCereal[0] << "|"
                 << " Valor = " << BarraValor[0] << endl;
            cout << "|" << BarraCereal[1] << "|"
                 << " Valor = " << BarraValor[1] << endl;
            cout << "|" << BarraCereal[2] << "|"
                 << " Valor = " << BarraValor[2] << endl;
            cout << "|" << MEM[0] << "|"
                 << " Valor = " << MEMValor << endl;
            cout << "-===================-" << endl;
            cout << "-===================-" << endl;
            cout << "Fim dos itens do corredor de guloseimas, se voce deseja comprar algo digite o nome do produto, caso queira voltar digite voltar" << endl;
            cin >> qualGuloseima;
            for (i = 0; i < qualGuloseima.length(); i++)
            {

                qualGuloseima[i] = toupper(qualGuloseima[i]);
            }
            i = 0;

            if (qualGuloseima == "BOMBOM")
            {

                cesta.insert(cesta.end(), BomBom[0]);
                cestaValor.insert(cestaValor.end(), BombomValor);
                cout << "Voce adicionou uma BomBom na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorGuloseima;
            }

            if (qualGuloseima == "FINNI")
            {

                cesta.insert(cesta.end(), Finni[0]);
                cestaValor.insert(cestaValor.end(), FinniValor);
                cout << "Voce adicionou uma Finni na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorGuloseima;
            }

            if (qualGuloseima == "BARRA DE MORANGO")
            {

                cesta.insert(cesta.end(), BarraCereal[0]);
                cestaValor.insert(cestaValor.end(), BarraValor[0]);
                cout << "Voce adicionou uma Barra de cereal sabor Morango na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorGuloseima;
            }

            if (qualGuloseima == "BARRA DE BANANA")
            {

                cesta.insert(cesta.end(), BarraCereal[2]);
                cestaValor.insert(cestaValor.end(), BarraValor[2]);
                cout << "Voce adicionou uma Barra de cereal sabor Banana sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorGuloseima;
            }

            if (qualGuloseima == "BARRA DE CHOCOLATE")
            {

                cesta.insert(cesta.end(), BarraCereal[1]);
                cestaValor.insert(cestaValor.end(), BarraValor[1]);
                cout << "Voce adicionou uma Barra de cereal sabor Chocolate na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorGuloseima;
            }

            if (qualGuloseima == "JUJUBA")
            {

                cesta.insert(cesta.end(), Jujuba[0]);
                cestaValor.insert(cestaValor.end(), JujubaValor);
                cout << "Voce adicionou uma Jujuba na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorGuloseima;
            }

            if (qualGuloseima == "M&M")
            {

                cesta.insert(cesta.end(), MEM[0]);
                cestaValor.insert(cestaValor.end(), MEMValor);
                cout << "Voce adicionou um M&M na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
                wait(2);
                system("CLS");
                goto corredorGuloseima;
            }

            if (qualGuloseima == "VOLTAR")
            {

                goto corredorPrincipal;
            }

            else
            {

                cout << "Insira um produto valido" << endl;
                wait(2);
                system("CLS");
                goto corredorGuloseima;
            }
        }

        if (*irCorredor == "CAIXA" && cesta.size() >= 1)
        {

            cout << "Voce entrou no caixa, voce tem os seguintes produtos na sua cesta: " << endl;
            for (int i = 0; i < cesta.size(); i++)
            {
                cout << "Item " << cesta[i] << " da sua cesta no valor de " << cestaValor[i] << " reais" << endl;
                valorTotal = valorTotal + cestaValor[i];
            }

            cout << "O total das suas compras foi de " << setprecision(3) << valorTotal << " reais" << endl;
            cout << "Realizando Pagamento..." << endl;
            conta.balance -= valorTotal;
            valorTotal = 0;
            wait(3);
            cesta.clear();
            cestaValor.clear();
            cout << "Pagamento Realizado, voce tem " << setprecision(3) << conta.balance << " reais sobrando" << endl;
            wait(2);
            system("pause");
            goto corredorPrincipal;
        }
        else if (cesta.size() <= 0 && *irCorredor == "CESTA")
        {
            cout << "sua cesta esta vazia, compre algo digitando o nome do produto!" << endl;
            goto corredorPrincipal;
        }

        if (*irCorredor == "CESTA")
        {
        cestaDeCompras:
            if (cesta.empty() == false && *irCorredor == "CESTA")
            {

                int posicaoItem;
                int *qualRemover = &posicaoItem;

                //    vector<int>::iterator it;
                //    it = cestaValor.erase(cestaValor.begin()+ posicaoItem);
                //    vector<string>::iterator it2;
                //    it2 = cesta.erase(cesta.begin() + posicaoItem);
                for (int i = 0; i < cesta.size(); i++)
                {
                    cout << i << " Item " << cesta[i] << " no valor de " << cestaValor[i] << endl;
                }

                cout << "se voce deseja remover algum item, digite o numero fornecido ao mesmo" << endl;
                cout << "caso não queira remover nenhum item digite sair" << endl;
                cin >> posicaoItem;

                if (cin)
                {

                    cout << "Removendo item " << cesta[*qualRemover] << endl;
                    wait(2);
                    cesta.erase(cesta.begin() + posicaoItem);
                    cestaValor.erase(cestaValor.begin() + posicaoItem);
                    cout << "Item Removido..." << endl;
                    wait(2);
                    *qualRemover == 0;
                    if (cesta.size() >= 1)
                    {
                        cout << "voce ainda tem itens na sua cesta..." << endl;
                        wait(2);
                        system("CLS");
                        cin.clear();
                        goto cestaDeCompras;
                    }
                    else if (cesta.size() <= 0)
                    {
                        cout << "sua sacola de compras esta vazia no momento, voltando para o corredor principal..." << endl;
                        *qualRemover == 0;
                        wait(2);
                        system("CLS");
                        cin.clear();
                        goto corredorPrincipal;
                    }
                }
                else
                {
                    *irCorredor == "";
                    *qualRemover == 0;

                    cout << "Nenhum item foi removido, indo para o corredor princpal..." << endl;
                    wait(2);
                    cin.clear();
                    goto corredorPrincipal;
                }
            }
            else if (cesta.empty() == true && *irCorredor == "CESTA")

            {
                cout << "Sua cesta esta vazia, coloque alguma coisa na sua cesta indo ao corredor e escolhendo o produto desejado!" << endl;
                wait(5);
                *irCorredor == "";
                goto corredorPrincipal;
            }

            if (*irCorredor == "CARTEIRA")
            {
                conta.checkWallet();
                goto entrouConveniencia;
            }
        }
        else
        {
            *irCorredor == "";
            goto entrouConveniencia;
        }
    }
}
int main()
{

    while (valendo = 1)
    {

    Menu:

        menuPrincipal();
        getline(cin, lugar);

        for (i = 0; i < lugar.length(); i++)
        {

            lugar[i] = toupper(lugar[i]);
        }
        i = 0;

        if (lugar == "BANCO")
        {

            cout << "voce deseja criar sua conta no banco?: ";
            cin >> criarConta;

            for (i = 0; i < criarConta.length(); i++)
            {

                criarConta[i] = toupper(criarConta[i]);
            }
            i = 0;

            if (criarConta == "Y" && conta.openAccount == 1)
            {
                goto entrarConta;
            }

            if (criarConta == "Y")
            {

                conta.openAccount = 1;
                cout << "ok, vamos precisar de alguns dos seus dados, informe seu nome: ";
                cin >> nome;

                cout << "ok, agora preciso da sua idade: ";
                cin >> idade;

                cout << "por fim, crie sua senha: ";
                cin >> senha;
                cout << "Criando sua conta..." << endl;
                wait(2);
                system("cls");
            oqueRealizar:
                cout << "sua conta foi criada, voce deseja realizar alguma operacao no momento?";
                getline(cin, operacao);

                for (i = 0; i < operacao.length(); i++)
                {

                    operacao[i] = toupper(operacao[i]);
                }
                i = 0;

                if (operacao == "Y")
                {

                entrarConta:
                    cout << "temos as seguintes operacoes no momento: saque, deposito e verificacao de saldo, qual voce deseja realizar ?" << endl;
                    cout << "SAQUE | DEPOSITO | SALDO" << endl;
                    cin >> qualOperacao;

                    for (i = 0; i < qualOperacao.length(); i++)
                    {

                        qualOperacao[i] = toupper(qualOperacao[i]);
                    }
                    i = 0;

                    if (qualOperacao == "SAQUE")
                    {

                        conta.withDraw();
                        goto entrarConta;
                    }
                    if (qualOperacao == "DEPOSITO")
                    {

                        conta.deposit();
                        goto entrarConta;
                    }
                    if (qualOperacao == "SALDO")
                    {

                        conta.checkBalance();
                        goto entrarConta;
                    }
                    if (qualOperacao == "SAIR")
                    {

                        goto Menu;
                    }
                    else
                    {

                        cout << "por favor informe uma operacao valida";
                        system("pause");
                        goto entrarConta;
                    }
                }

                if (operacao == "N")
                {

                    cout
                        << "ok, sua conta foi criada mas voce escolheu nao realizar mudancas no momento" << endl;
                    system("pause");
                }

                else
                {
                    cout << "informe uma operacao valida! " << endl;
                    system("pause");
                    operacao.clear();
                    goto oqueRealizar;
                }
            }
            if (criarConta == "N")
            {

                cout
                    << "voce escolheu nao criar uma conta no momento";
                system("pause");
            }
            else
            {

                cout
                    << "informe um caractere valido!";
                system("pause");
            }
        }
        if (lugar == "BAR" && conta.openAccount == 1)
        {

            irNoBar();
        }

        if (lugar == "BAR" && conta.openAccount == 0)
        {

            cout
                << "Voce precisa de uma conta no banco para comprar coisas!" << endl;
            system("pause");
            goto Menu;
        }

        if (lugar == "CONVENIENCIA" && conta.openAccount == 1)
        {

            irNaConv();
        }

        if (lugar == "CONVENIENCIA" && conta.openAccount == 0)
        {

            cout
                << "Voce precisa de uma conta no banco para comprar coisas!" << endl;
            system("pause");
            goto Menu;
        }

        if (lugar == "PASSA")
        {
            conta.openAccount = 1;
            conta.balance = 500000;
            goto Menu;
        }
        if (lugar == "CARTEIRA")
        {
            conta.checkWallet();
            goto Menu;
        }
    }
    return 0;
}
