#ifndef _ENCA_H
#define _ENCA_H
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define guardar scanf
#define impr printf
#define pause() getchar
#define pos gotoxy
using namespace std;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = (SHORT)x - 1;
    coord.Y = (SHORT)y - 1;
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
#endif