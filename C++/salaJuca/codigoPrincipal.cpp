#include "classes.h"
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

Account conta = Account(nome, senha);



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

    string qualCorredor;
    vector<string> cesta;
    vector<int> cestaValor;

entrouConveniencia:


    cout << "voce entrou na conveniencia qual corredor voce quer ir?" << endl;
    cout << "--====================--" << endl;
    cout << "Alimento" << endl;
    cout << "Bebidas" << endl;
    cout << "Guloseimas" << endl;
    cout << "Caixa" << endl;
    cout << "--===================--" << endl;
    cout << "caso queira sair digite sair ou digite cesta para ver sua cesta de compras!." << endl;
    cin >> qualCorredor;

    for (i = 0; i < qualCorredor.length(); i++)
    {

        qualCorredor[i] = toupper(qualCorredor[i]);
    }
    i = 0;

    if (qualCorredor == "ALIMENTO")
    {

        //^ Corredor alimentos
         string Biscoito[2] = {"Biscoito", "Alimento"};
         double BiscoitoValor = 4;
         string Skilho[2] = {"Biscoito", "Alimento"};
         double SkilhoValor = 3;
         string Pipoca[2] = {"Pipoca", "Alimento"};
         double PipocaValor = 3.5;
         string Chocolate[2] = {"Chocolate", "Alimento"};
         double ChocolateValor = 5;
         string Bolacha[2] = {"Bolacha", "Alimento"};
         double BolachaValor = 7;

    corredorAlimentacao:
        string qualAlimento;
        cout << "voce esta no corredor de alimentação, temos os seguintes itens disponiveis para compra" << endl;
        cout << "|" << Biscoito[0] << "|" <<  "Valor =  " << BiscoitoValor << "$ "<< "|" << endl;
        cout << "|" << Skilho[0] << "|" << "Valor =  " << SkilhoValor << "$ "<< "|" << endl;
        cout << "|" << Pipoca[0] << "|" << "Valor =  " << PipocaValor << "$ "<< "|" << endl;
        cout << "|" << Chocolate[0] << "|" << "Valor =  " << ChocolateValor << "$ "<< "|" << endl;
        cout << "|" << Bolacha[0] << "|" << "Valor =  " << BolachaValor << "$ "<< "|" << endl;
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
            system("CLS");
            goto corredorAlimentacao;
        }

        if (qualAlimento == "SKILHO")
        {

            cesta.insert(cesta.end(), Skilho[0]);
            cestaValor.insert(cestaValor.end(), SkilhoValor);
            cout << "Voce adicionou um skilho na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
            system("CLS");
            goto corredorAlimentacao;
        }

        if (qualAlimento == "PIPOCA")
        {

            cesta.insert(cesta.end(), Pipoca[0]);
            cestaValor.insert(cestaValor.end(), PipocaValor);
            cout << "Voce adicionou uma pipoca na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
            system("CLS");
            goto corredorAlimentacao;
        }

        if (qualAlimento == "CHOCOLATE")
        {

            cesta.insert(cesta.end(), Chocolate[0]);
            cestaValor.insert(cestaValor.end(), ChocolateValor);
            cout << "Voce adicionou um chocolate na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
            system("CLS");
            goto corredorAlimentacao;
        }
 
        if (qualAlimento == "BOLACHA")
        {

            cesta.insert(cesta.end(), Bolacha[0]);
            cestaValor.insert(cestaValor.end(), BolachaValor);
            cout << "Voce adicionou uma bolacha na sacola de compras, o valor total das suas compras sera informado no caixa!" << endl;
            system("CLS");
            goto corredorAlimentacao;

        }

        if (qualAlimento == "VOLTAR")
        {

            system("CLS");
            goto entrouConveniencia;
        }

        else
        {

            cout << "digite um produto valido ou digite VOLTAR para ir ao corredor principal" << endl;
            goto corredorAlimentacao;
        }
    }

    if (qualCorredor == "BEBIDAS")
    {

        //^ Corredor Bebidas
        string Coca[2] = {"Coca-Cola", "Bebida",};
        double CocaValor = 4;
        string Fanta[3] = {"Fanta Uva", "Fanta Laranja", "Bebida"};
        double FantaValor = 3;
        string Pipoca[2] = {"Pipoca", "Alimento"};
        double PipocaValor = 3.5;
        string Chocolate[2] = {"Chocolate", "Alimento"};
        double ChocolateValor = 5;
        string Bolacha[2] = {"Bolacha", "Alimento"};
        double BolachaValor = 7;

    corredorBebidas:
        cout << "voce esta no corredor de bebidas, temos os seguintes itens disponiveis para compra" << endl;
        cout << "|" << Refrigerante[0] << "|" << endl;
        cout << "|" << Refrigerante[1] << "|" << endl;
        cout << "|" << Refrigerante[2] << "|" << endl;
        cout << "|" << Agua << "|" << endl;
        cout << "|" << Suco[0] << "|" << endl;
        cout << "|" << Suco[1] << "|" << endl;
        cout << "|" << Suco[2] << "|" << endl;
        cout << "|" << Energetico[0] << "|" << endl;
        cout << "|" << Energetico[1] << "|" << endl;
        cout << "|" << Nescau << "|" << endl;
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

            
            cout << "voce adicionou uma Coca-Cola ao carrinho" << endl;
            wait(2);
            system("CLS");
            goto corredorBebidas;
        }

        if (qualBebida == "PEPSI")
        {

           
            cout << "voce adicionou uma Pepsi ao carrinho" << endl;
            wait(2);
            system("CLS");
            goto corredorBebidas;
        }

        if (qualBebida == "GUARANA")
        {

            
            cout << "voce adicionou um Guarana ao carrinho" << endl;
            wait(2);
            system("CLS");
            goto corredorBebidas;
        }
        if (qualBebida == "AGUA")
        {

            
            cout << "voce adicionou uma agua ao carrinho" << endl;
            wait(2);
            system("CLS");
            goto corredorBebidas;
        }

        if (qualBebida == "SUCO DE LARANJA")
        {

            
            cout << "voce adicionou um suco de laranja ao carrinho" << endl;
            wait(2);
            system("CLS");
            goto corredorBebidas;
        }

        if (qualBebida == "SUCO DE MORANGO")
        {

            
            cout << "voce adicionou um suco de morango ao carrinho" << endl;
            wait(2);
            system("CLS");
            goto corredorBebidas;
        }

        if (qualBebida == "SUCO DE UVA")
        {

           
            cout << "voce adicionou um suco de uva ao carrinho" << endl;
            wait(2);
            system("CLS");
            goto corredorBebidas;
        }

        if (qualBebida == "MONSTER")
        {

            
            cout << "voce adicionou uma Monster ao carrinho" << endl;
            wait(2);
            system("CLS");
            goto corredorBebidas;
        }

        if (qualBebida == "RED BULL" || qualBebida == "RED-BULL")
        {

            
            cout << "voce adicionou uma Red-Bull ao carrinho" << endl;
            wait(2);
            system("CLS");
            goto corredorBebidas;
        }

        if (qualBebida == "NESCAU")
        {

            
            cout << "voce adicionou um Nescau ao carrinho" << endl;
            wait(2);
            system("CLS");
            goto corredorBebidas;
        }

        else
        {

            cout << "Digite um produto valido ou digite VOLTAR para voltar aos corredores" << endl;
            wait(2);
            system("CLS");
            goto corredorBebidas;
        }
    }

    if (qualCorredor == "GULOSEIMAS")
    {

        string qualGuloseima;
        //^ Corredor guloseimas
        string BomBom = "BomBom - 1,50$ ";
        string Finni = "Finni - 4,50$ ";
        string barraCereal[3] = {"Barra de cereal sabor morango - 3$", "Barra de cereal sabor chocolate - 5$", "Barra de cereal sabor banana - 4$"};
        string Jujuba = "Jujuba - 4$ ";
        string mem = "M&M - 5$ ";

    corredorGuloseima:
        cout << "voce esta no corredor de guloseimas, temos os seguintes itens disponiveis para compra" << endl;
        cout << "|" << BomBom << "|" << endl;
        cout << "|" << Finni << "|" << endl;
        cout << "|" << barraCereal[0] << "|" << endl;
        cout << "|" << barraCereal[1] << "|" << endl;
        cout << "|" << barraCereal[2] << "|" << endl;
        cout << "|" << mem << "|" << endl;
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

            
            cout << "voce adicionou um bombom ao carrinho" << endl;
            goto corredorGuloseima;
        }

        if (qualGuloseima == "FINNI")
        {

            
            cout << "voce adicionou uma Finni ao carrinho" << endl;
            goto corredorGuloseima;
        }

        if (qualGuloseima == "BARRA DE MORANGO")
        {

           
            cout << "voce adicionou uma barra de cereal sabor morango ao carrinho" << endl;
            goto corredorGuloseima;
        }

        if (qualGuloseima == "BARRA DE BANANA")
        {

            
            cout << "voce adicionou uma barra de cereal sabor morango ao carrinho" << endl;
            goto corredorGuloseima;
        }

        if (qualGuloseima == "BARRA DE CHOCOLATE")
        {

            
            cout << "voce adicionou uma barra de cereal sabor morango ao carrinho" << endl;
            goto corredorGuloseima;
        }

        if (qualGuloseima == "JUJUBA")
        {

            
            cout << "voce adicionou uma jujuba ao carrinho" << endl;
            goto corredorGuloseima;
        }

        if (qualGuloseima == "M&M")
        {

            
            cout << "voce adicionou um pacote de M&M carrinho" << endl;
            goto corredorGuloseima;
        }

        if (qualGuloseima == "VOLTAR")
        {

            goto entrouConveniencia;
        }

        else
        {

            cout << "Digite um produto valido ou digite VOLTAR para voltar aos corredores" << endl;
            goto corredorGuloseima;
        }
    }

    if (qualCorredor == "CAIXA")
    {

        cout << "Voce entrou no caixa, voce tem os seguintes produtos na sua cesta: " << endl;
    }

    if (qualCorredor == "CESTA")
    {
        if (cesta.empty() == false)
        {

            for (int i = 0; i < cesta.size(); i++)
            {
            cout << "Item "<< cesta[0] <<" No valor de: " <<  cestaValor[0] << endl;
            }

        system("pause");
        system("CLS");

        }else{
            
            cout << "Voce nao tem itens na sua cesta, compre alguma coisa !" << endl;
            system("pause");
            system("cls");
            goto entrouConveniencia;
            

        }
    }else{
        cout << "por favor informe uma entrada valida" << endl;
        goto entrouConveniencia;
    }
}

int main()
{

    while (valendo = 1){

    Menu:

        menuPrincipal();
        cin >> lugar;
    


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

        if (criarConta == "Y")
        {

            conta.openAccount = 1;
            cout << "ok, vamos precisar de alguns dos seus dados, informe seu nome: ";
            cin >> nome;

            cout << "ok, agora preciso da sua idade: ";
            cin >> idade;

            cout << "por fim, crie sua senha: ";
            cin >> senha;

            cout << "sua conta foi criada, voce deseja realizar alguma operacao no momento?";
            cin >> operacao;

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

                system("pause");
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

    
}
    return 0;
}