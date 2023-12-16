
// ^ Criando um programa para realizar criação e login de usuario 

#include <iostream>
#include <random>
#include <list>



using namespace std;

int main(){

    //? User's personal data
    string userEmail;
    string userName;
    string UserPassword;

    //* Data for the program to verify
    string createAccount;
    string userLoginEmail;
    string userLoginPassword;
    string verifyPassword = UserPassword;
    string Login;



    cout << "You want to create a new account?(Y/N):";
    cin >> createAccount;

    if (createAccount == "Y"){

        //? Username

        cout << "Please enter your username:";
        cin >> userName;

        //? User Email
        
        cout << "Please put your email login: ";
        cin >> userEmail;

        //? User Password 
        createPass:
        cout << "Enter your password:";
        cin >> UserPassword;

        //? Confirm user password 
        cout << "Confirm your password:";
        cin >> verifyPassword;

        //? Account creation successfully and login
        if (verifyPassword == UserPassword){
            
            cout << "Your account has been succesfully created, do you want to login?(Y/N):";
            cin >> Login;
            if (Login == "Y"){
                //* Login in via email
                emailLogin:
                cout << "Enter your email:";
                cin >> userLoginEmail;
                if (userLoginEmail != userEmail){
                    //^ Email does not match with database
                    cout << "Your email is not on your database\n";
                    goto emailLogin; 
                }else{
                    givePass:
                    cout << "Enter your password:";
                    cin >> userLoginPassword;
                    if (userLoginPassword != UserPassword){
                        //^ Password does not match
                        cout << "Your password does not match!";
                        goto givePass;
                    }else{
                        //^ Password match
                        //^ Check if wants to enter system
                        string wannaEnter;
                        string systemArea[3][4] = {
                            {"coke ", "butter ", "medicine ", "water "},
                            {"Debt = 1,325$ ", "Real Gain = 5,152$ ", "Processing Gain = 2,155$ ", "Losing = 3,523$ "},
                            {"HR ", "Storage ", "Balance ", "Managers "}
                        } ;

                        cout << "Login made succesfully!\n";
                        mainSystem:
                        cout << "What part of the system you want to go?\n";
                        cout << " 1 - Storage, 2 - Balance, 3 - Managment \n";
                        cin >> wannaEnter;
                            if (wannaEnter == "Storage" || "storage" || "1")
                        {
                            string goBack;
                            enterStorage:
                            cout << systemArea[0][0];
                            cout << systemArea[0][1];
                            cout << systemArea[0][2];
                            cout << systemArea[0][3];
                            cout << "Finished listing Storage itens, you want to go back?";
                            cin >> goBack;

                            if (goBack == "Y" || "y")
                            {
                                goto mainSystem;
                            }else{
                                goto enterStorage;
                            }
                            
                            

                        }

                            if (wannaEnter == "Balance" || "balance" || "2")
                        {
                            string goBack;
                            enterBalance:
                            cout << systemArea[1][0];
                            cout << systemArea[1][1];
                            cout << systemArea[1][2];
                            cout << systemArea[1][3];
                            cout << "Finished listing Balance itens, you want to go back?";
                            cin >> goBack;

                            if (goBack == "Y" || "y")
                            {
                                goto mainSystem;
                            }else{
                                goto enterBalance;
                            }   
                        }

                            if (wannaEnter == "Magagment" || "managment" || "3")
                        {
                            string goBack;
                            enterManagment:
                            cout << systemArea[2][0];
                            cout << systemArea[2][1];
                            cout << systemArea[2][2];
                            cout << systemArea[2][3];
                            cout << "Finished listing Managment itens, you want to go back?";
                            cin >> goBack;

                            if (goBack == "Y" || "y")
                            {
                                goto mainSystem;
                            }else{
                                goto enterManagment;
                            }   
                        }
                        
                        
                    }
                }
            }else{
                //^ User did not want to make login at the moment
                cout << "User chose not to make login right now, leaving!";
            }
        }else{
            //^ Password do not match with user password 
            cout << "Your password does not match";
            goto createPass;
        }
    }
}