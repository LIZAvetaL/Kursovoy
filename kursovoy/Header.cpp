#pragma once
#include "Header.h"

void SetColor(ConsoleColor text, ConsoleColor background) //������� ����������� ����� �������
{
    HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsoleHandle, (WORD)((background << 4) | text));
}


