@echo off

git submodule init
git submodule update --remote

cd EDEN

call CompilacionWinVS.bat

cd ..