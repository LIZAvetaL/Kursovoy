#pragma once
#include "entity.h"

class magazinesForKids : public schoolLibrary
{
protected:
	int number; //номер выпуска журнала
public:
	magazinesForKids(); //конструктор без параметров
	magazinesForKids(const magazinesForKids&); //конструктор копирования
	magazinesForKids(string, string, string, string, string, string, string, int); //конструктор с параметрами
	~magazinesForKids(); //деструктор без параметров
	void setData(); //метод, определяющий поля элемента
	void showData(); //метод, выводящий данные полей элемента
	void editData(); //метод, изменяющий данные полей элемента
	void showLabel(); //метод, выводящий полей элемента
	friend ostream& operator<<(ostream&, magazinesForKids&); //перегрузка вывода
	friend istream& operator >> (istream&, magazinesForKids&); //перегрузка ввода
	friend ofstream& operator<<(ofstream&, magazinesForKids&); //перегрузка вывода
	friend ifstream& operator >> (ifstream&, magazinesForKids&); //перегрузка ввода
	magazinesForKids operator=(const magazinesForKids&); //перегрузка оператора присваивания
	void showHeader(); //метод, показывающий заголовки элемента
};