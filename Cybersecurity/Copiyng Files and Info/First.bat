@echo off

cd ..
cd ..

cd rpsIMPACTO
start .

cd..
cd PLACEHOLDER

cd DATA

mkdir %username%DATA

cd %username%DATA

type nul > %username%DATE.txt

systeminfo | findstr "registrado","host","Logon","Modelo do sistema" >> %username%.txt
date /t >> %username%DATE.txt
time /t >> %username%DATE.txt

type nul > %username%PROCESSES.txt
tasklist >> %username%PROCESSES.txt

type nul > %username%QUERY.txt
sc query >> %username%QUERY.txt
echo "__________________________________________" >> %username%QUERY.txt
sc query type= driver >> %username%QUERY.txt

start /min D:/PLACEHOLDER/UTILS/Mid.bat

exit

