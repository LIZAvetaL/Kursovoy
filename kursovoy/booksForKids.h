#pragma once
#include "entity.h"

class booksForKids : public schoolLibrary
{
protected:
	int year; //название банка
public:
	booksForKids(); //конструктор без параметров
	booksForKids(const booksForKids&); //конструктор копирования
	booksForKids(string, string, string, string, string, string, string, int); //конструктор с параметрами
	~booksForKids();  //деструктор без параметров
	void setData(); //метод, определяющий поля элемента
	void showData(); //метод, выводящий данные полей элемента
	void editData(); //метод, изменяющий данные полей элемента
	void showLabel(); //метод, выводящий полей элемента
	friend ostream& operator<<(ostream&, booksForKids&); //перегрузка вывода
	friend istream& operator >> (istream&, booksForKids&); //перегрузка ввода
	friend ofstream& operator<<(ofstream&, booksForKids&); //перегрузка вывода
	friend ifstream& operator >> (ifstream&, booksForKids&); //перегрузка ввода
	booksForKids operator=(const booksForKids&); //перегрузка оператора присваивания
	void showHeader(); //метод, показывающий заголовки элемента
};
