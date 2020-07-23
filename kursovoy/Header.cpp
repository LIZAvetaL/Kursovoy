#pragma once
#include "Header.h"

void SetColor(ConsoleColor text, ConsoleColor background) //Функция определения цвета консоли
{
    HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsoleHandle, (WORD)((background << 4) | text));
}


