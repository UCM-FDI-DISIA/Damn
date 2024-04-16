@echo off

git submodule init
:: git submodule update --remote :: Usaremos esto cuando esté todo subido a la rama main

cd EDEN

call CompilacionWinVS.bat

cd ..