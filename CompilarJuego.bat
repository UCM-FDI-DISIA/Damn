@echo off

call ActualizarMotor.bat

set GAMEDLLFOLDERS=.\bin
set sourceFolder=.\EDEN\bin\assets
set destinationFolder=.\bin\assets

for %%i in (".\EDEN\bin\*") do (
        XCOPY /y "%%i" %GAMEDLLFOLDERS%
)

xcopy "%sourceFolder%\*" "%destinationFolder%\" /E /Y

msbuild "Damn.sln" /p:configuration=Debug /p:Platform=x64
msbuild "Damn.sln" /p:configuration=Release /p:Platform=x64