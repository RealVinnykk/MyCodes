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

void chars(string name, int time, int takeout){

    if (takeout == 1)
    {
        for (int i = 0; i < name.size(); i++)
        {
           cout << name[i];
           Sleep(time); 
        }
           cout << "" << endl;
        
    }else{
        for (int i = 0; i < name.size(); i++)
        {
          cout << name[i];
          Sleep(time); 
        }
        
    }
    

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
    ~Player(){

    };
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


int suaClasse(){
     int classe;

    
    chars("our village is under attack, chose your class fast!", 100, 1);
    cout << "1 - Healer | 2 - Assasin | 3 - Mage" << endl;
    chars("which class you want adventurer?:", 100, 0);

    cin >> classe;

    
}

string playerName;

int main(){
    chars("hello adventurer...", 100, 1); 
    chars("tell-me your name:", 100, 0);
    cin >> playerName;
    chars("hello ", 100, 0); chars(playerName, 100, 1);

   

    
    
    
    system("pause");
    


    return 0;//^ Ending main() function
    
}