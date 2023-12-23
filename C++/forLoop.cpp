#include <iostream>
using namespace std;
int main(){

    for (int i = 0; i < 5; i++)
    {
        cout << "The loop is..." << i << endl;

        if (i == 3)
        {
            break;
        }

        cout << "Looping...";


        
    }
    
    cout << "Saindo do programa ";

    return 0;


}