#include <iostream>
#include <list>

int main(){

    std::list<int> prices = {};
    std::string name;
    std::string addList;
    int age;
    int addPrice;

    std::cout << "What is your name?: ";
    std::cin >> name;

    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "<----------------------------------------------->" << std::endl;
    std::cout << "Your name is " << name << std::endl;
    std::cout << "You are " << age << " Years old" << std::endl;
    std::cout << "Do you want to add cars numbers to the list?: (Y/N) ";
    std::cin >> addList;
    if (addList == "Y")
    {
        std::cin >> addPrice;
    prices.push_back(addPrice);

    prices;
    }else{
        std::cout << "Leaving program";
    }
    


    system("pause");

}