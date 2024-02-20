#include <algorithm>
#include <iomanip>
#include <cctype>
#include <Windows.h>
#include <iostream>
#include <random>
#include <list>
#include <vector>
#include <string.h>
#include <locale.h>

using namespace std;

void wait(int sec ){
    Sleep(sec * 1000);
}

class Enemy{
    public:
    int HP;
    int ATK;
    string name;
    int REW;

    void stats(){
        cout << name << " stats: " << endl;
        cout << "HP: " << HP << endl;
        cout << "ATK: " << ATK << endl;
    }
    void defense(){
        cout << name << " defendeu e obteve 4 de HP! " << endl;
        HP+= 4;
    }
    void attack(){
        cout << name << " atacou e causou " << ATK << " de dano" << endl;
    }
};

class Player{
    public:
    int HabilityTime = 5;
    int stamina = 15;
    int HP = 15;
    int ATK1;
    int ATK2;
    int XP = 0;
    int LVL = 1;
    string name;

    Player(string nome){
        name = nome;
    };
    ~Player(){};
      void stats(){
        cout << name << " stats: " << endl;
        cout << "HP: " << HP << endl;
        cout << "ATK1: " << ATK1 << endl;
        cout << "ATK2: " << ATK2 << endl;
        cout << "XP: " << XP << endl;
        cout << "LVL: " << LVL << endl;

    }

    void changeStats(int atkU, int atkD, int health){
        ATK1 = atkU;
        ATK2 = atkD;
        HP = health;
    }

    void defense(){
        cout << "voce defendeu e obteve 4 de HP e 5 de stamina! " << endl;
        HP += 4;
        stamina += 5;
        HabilityTime--;
    } 
    void attack(int qual){
        if (qual == 1)
        {
            cout << "voce atacou e causou 5 de dano, usando 5 de estamina" << endl;
            stamina -= 5;
            HabilityTime--;
        }
        else if (qual == 2)
        {
         cout << "voce atacou e causou 7 de dano, usando 7 de estamina" << endl;
         stamina -= 7;
         HabilityTime--;
        }
        
    }

    void hability(){
        cout << "voce usou sua habilidade especial e maximizou sua vida e estamina! seu ataque foi dobrado no proximo turno" << endl;
        HP += HP;
        ATK1 += ATK1;
        ATK2 += ATK2;
        stamina += stamina;
    }


};

class healer : public Player{
    public:
    
};

class assasin : public Player{
    public:
};

class mage : public Player{

};
int main(){
    
}