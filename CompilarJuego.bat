@echo off

call ActualizarMotor.bat

set GAMEDLLFOLDERS=.\bin

for %%i in (".\EDEN\bin\*") do (
        XCOPY /y "%%i" %GAMEDLLFOLDERS%
)

msbuild "Damn.sln" /p:configuration=Debug /p:Platform=x64
msbuild "Damn.sln" /p:configuration=Release /p:Platform x64