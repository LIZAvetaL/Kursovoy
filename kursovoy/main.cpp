#pragma once

#include"Interface.cpp"
#include"Interface1.h"
void main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Interface<bool> design;
	design.menuForAdminOrClient();
}