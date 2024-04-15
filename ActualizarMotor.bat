@echo off

git submodule init
:: git submodule update --remote :: Usaremos esto cuando esté todo subido a la rama main

cd EDEN
:: Comentar la línea de abajo cuando se pase todo a main
git checkout EDEN_DLL

call CompilacionWinVS.bat

cd ..