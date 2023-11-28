// ^ Criando um programa para realizar criação e login de usuario 

#include <iostream>


int main(){

    //? User's personal data
    std::string userEmail;
    std::string userName;
    std::string UserPassword;

    //* Data for the program to verify
    std::string createAccount;
    std::string userLoginEmail;
    std::string userLoginPassword;
    std::string verifyPassword = UserPassword;
    std::string Login;



    std::cout << "You want to create a new account?(Y/N):";
    std::cin >> createAccount;

    if (createAccount == "Y"){

        //Username

        std::cout << "Please enter your username:";
        std::cin >> userName;

        //User Email
        
        std::cout << "Please put your email login: ";
        std::cin >> userEmail;

        // User Password 

        std::cout << "Enter your password:";
        std::cin >> UserPassword;

        std::cout << "Confirm your password:";
        std::cin >> verifyPassword;
        if (verifyPassword == UserPassword){
            std::cout << "Your account has been succesfully created, do you want to login?(Y/N):";
            std::cin >> Login;
            if (Login == "Y"){
                std::cout << "Enter your email:";
                std::cin >> userLoginEmail;
                if (userLoginEmail != userEmail){
                    std::cout << "Your email does not match!";
                    exit;
                }else{
                    std::cout << "Enter your password:";
                    std::cin >> userLoginPassword;
                    if (userLoginPassword != UserPassword){
                        std::cout << "Your password does not match!";
                        exit;
                    }else{
                        std::cout << "Login made succesfully!";
                        exit;
                    }
                }
            }else{
                std::cout << "User chose not to make login right now, leaving!";
                exit;
            }
        }else{
            std::cout << "Your password does not match";
            exit;
        }
    }
}