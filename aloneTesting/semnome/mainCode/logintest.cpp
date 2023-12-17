
// ^ Criando um programa para realizar criação e login de usuario


#include <windows.h>
#include <iostream>
#include <random>
#include <list>
#include <locale.h>

using namespace std;

int main()
{

    setlocale(LC_ALL, " ");

    //* User's personal data
    string userEmail;
    string userName;
    string UserPassword;

    //* Data for the program to verify
    string createAccount;
    string userLoginEmail;
    string userLoginPassword;
    string verifyPassword = UserPassword;
    string Login;

    //? Starting the program
    cout << "You want to create a new account?(Y/N):";
    cin >> createAccount;

    if (createAccount == "Y")
    {

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
        if (verifyPassword == UserPassword)
        {

            cout << "Your account has been succesfully created, do you want to login?(Y/N):";
            cin >> Login;
            if (Login == "Y")
            {
            //? Login in via email
            emailLogin:
                cout << "Enter your email:";
                cin >> userLoginEmail;
                if (userLoginEmail != userEmail)
                {
                    //^ Email does not match with database
                    cout << "Your email is not on your database\n";
                    goto emailLogin;
                }
                else
                {
                //? User's password for login
                givePass:
                    cout << "Enter your password:";
                    cin >> userLoginPassword;
                    if (userLoginPassword != UserPassword)
                    {
                        //^ Password does not match
                        cout << "Your password does not match!";
                        goto givePass;
                    }
                    else
                    {
                        //? Password match

                        //? Entered system, checks if want to enter a specific part of system
                        cout << "Login made succesfully!\n";
                        mainSystem:
                        //? Check if wants to enter system
                        string wannaEnter;
                        string systemArea[3][4] = {

                            {"coke ", "butter ", "medicine ", "water "}, //^ Storage 
                            {"Debt = 1,325$ ", "Real Gain = 5,152$ ", "Processing Gain = 2,155$ ", "Losing = 3,523$ "}, //^ Finance 
                            {"HR ", "Storage ", "Balance ", "Managers "}}; //^ Admin
                        cout << "What part of the system you want to go?\n";
                        cout << " 1 - Storage, 2 - Balance, 3 - Managment \n";
                        cin >> wannaEnter;
                        if (wannaEnter == "1")
                        
                        {
                            //? Entered storage

                            enterStorage:
                            wannaEnter.clear();
                            string goBack;
                            goBack.clear();

                            cout << systemArea[0][0] <<  endl;
                            cout << systemArea[0][1] <<  endl;
                            cout << systemArea[0][2] <<  endl;
                            cout << systemArea[0][3] <<  endl;
                            cout << "Finished listing Storage itens, you want to go back?\n";
                            cin >> goBack;


                            if (goBack == "Y")
                            {
                            //~ Check if wants to go back into main menu of system's part
                                goto mainSystem;
                            }else if (goBack ==  "N")
                            {
                                goto enterStorage;
                            }else{
                                goBack.clear();
                                cout << "Please enter a valid Character! (Y/N)";
                                cin >> goBack;

                                if (goBack == "Y")
                                {
                                    goto mainSystem;
                                }
                                if (goBack == "N"){
                                    goto enterStorage;
                                }
                            }
                            
                        }else if (wannaEnter == "2")
                        {
                            //? Goes into balance part

                            enterBalance:
                            wannaEnter.clear();
                            string goBack;
                            goBack.clear();
                            
                            cout << systemArea[1][0] <<  endl;
                            cout << systemArea[1][1] <<  endl;
                            cout << systemArea[1][2] <<  endl;
                            cout << systemArea[1][3] <<  endl;
                            cout << "Finished listing Balance itens, you want to go back?";
                            finishBalance:
                            cin >> goBack;

                            if (goBack == "Y")
                            {
                                //~ Checks if wants to go back to system part
                                goto mainSystem;
                            }else if (goBack ==  "N")
                            {
                                goto enterBalance;
                            }else{
                                cout << "Please enter a valid Character! (Y/N)";
                                cin >> goBack;
                                if (goBack == "Y")
                                {
                                    goto mainSystem;
                                }
                                if (goBack == "N")
                                {
                                    goto enterBalance;
                                }
                                
                            }
                        }else if (wannaEnter == "3")
                        {
                            //? Entered general managment
                            //? Asks user for admin's password

                            int adminLogin = 4545;
                            int adminPass;

                            cout << "You have entered general managment area! inform admin password to continue!";
                            cin >> adminPass;

                            if (adminPass != adminLogin)
                            {
                                cout << "Admin pass was wrong! leaving admin area!";
                                goto mainSystem;
                            }else{
                            


                            enterManagment:
        
                            
                            wannaEnter.clear();
                            string goBack;
                            int ADMIN = 4545;
                            goBack.clear();
                            string managerArea;

                            cout << "If you wish to leave managment, please press Ctrl + C\n";
                            Sleep(1000);
                            
                            cout << systemArea[2][0] <<  endl;
                            cout << systemArea[2][1] <<  endl;
                            cout << systemArea[2][2] <<  endl;
                            cout << systemArea[2][3] <<  endl;
                            cout << "Finished listing general managment itens, what item you wish to go?\n";
                            cin >> managerArea;

                            if(managerArea == "HR"){
                                
                                string HR[4][4]{
                                    {""},
                                    {},
                                    {},
                                    {},
                                };
                                cout << "You have entered human resources area, we have the following operations\n";
                            }
                            /* Complementary things that may be added later 
                              if(ADMIN == 4545){
                            //     //~ asks for admin password in order to make changes
                            // goBack.clear();
                            // int adminLogin = 1234;
                            // int adminPass;
                            // cout << "If you wish to make changes, please enter admin password: ";
                            // cin >> adminPass;
                            //     if (adminPass == adminLogin)
                            //     {
                            //         cout << "YOU HAVE ENTERED A ADMIN ONLY PAGE, PLEASE BE AWARE AND CIENT OF CHANGES YOU MAKE FROM NOW ON!";
                            //         cout << "Available changes";
                                // } */
                            }
                        }
                    }
                }
            }
            else
            {
                //^ User did not want to make login at the moment
                cout << "User chose not to make login right now, leaving!";
            }
        }
        else
        {
            //^ Password do not match with user password
            cout << "Your password does not match";
            goto createPass;
        }
    }
}