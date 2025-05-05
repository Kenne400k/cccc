@echo off
title PCODER Node Launcher
color 0B
mode con: cols=80 lines=30

cls
echo.
echo   ██████╗  ██████╗ ██████╗ ██████╗ ███████╗██████╗ 
echo   ██╔══██╗██╔════╝██╔════╝██╔═══██╗██╔════╝██╔══██╗
echo   ██████╔╝██║     ██║     ██║   ██║█████╗  ██████╔╝
echo   ██╔═══╝ ██║     ██║     ██║   ██║██╔══╝  ██╔══██╗
echo   ██║     ╚██████╗╚██████╗╚██████╔╝███████╗██║  ██║
echo   ╚═╝      ╚═════╝ ╚═════╝ ╚═════╝ ╚══════╝╚═╝  ╚═╝
echo.
echo   >>> Khởi chạy PCODER Node.js App...
echo --------------------------------------------------
echo.

node index.js

echo.
echo --------------------------------------------------
set /p userinput=[?] Nhập STOP để thoát: 
if /i "%userinput%"=="STOP" (
    echo [x] Đã thoát chương trình.
    exit
) else (
    echo [!] Sai từ khóa. Nhấn phím bất kỳ để thoát...
    pause > nul
    exit
)
