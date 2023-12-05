 #~ try to make it in python

    #^ Program pre-data to insert
prefix = "@Local.com"
wantAccount = ""

    #? User's personal data
userEmail = str;
userName = str;
UserPassword = str;
    #* Data for the program to verify
createAccount = str;
userLoginEmail = str;
userLoginPassword = str;
verifyPassword = str;
Login = str;

wantAccount = input('Do you want to create an accout?(Y/N):')


if (wantAccount == "Y"):(
    userName = input('Enter your username:'),
    print('Your username is '+ str(userName) + str(prefix)),
    userEmail = input('Enter your email:'),
    UserPassword = input('Enter your password:'),
    verifyPassword = input('Verify password:'),


)
else:(
    print('Ok, tell us when you\'re ready'),
    exit()
);
    
if  (verifyPassword == UserPassword):(
        print('Account created Successfully!'),
        Login == input('Do you want to login?(Y/N):'),
        userLoginEmail == input('Enter your email:'),
        userLoginPassword == input('Enter your password')
    );
if (verifyPassword != UserPassword):(
    print('Password does not match!'),
    exit()
)
if (userLoginPassword == UserPassword):(
    print('Log-in successfully!')
);
else:(
    print('Password does not match!'),
);

#* Desisto