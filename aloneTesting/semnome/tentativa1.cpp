
#include <iostream>
//~ tentando repetir o codigo feito em JavaScript em C++

int main(){
    int kmDriven;
    int Litters;
    int kmPerLitter = kmDriven / Litters;

    std::cout << "How many Litters of galosine you put on the tank?\n";
    std::cin >> Litters;

    std::cout << "How many kilometeres was the distance of the trip ?\n";
    std::cin >> kmDriven;

    std::cout << "The car made a avarage of " << kmPerLitter << " Kilometers per litter on this trip"; 
}
;
//~ Finalizado em 