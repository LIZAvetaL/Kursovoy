#pragma once
#include "individual.h"

class booksForAdults : public adultLibrary
{
protected:
	int year; //год выпуска книги
public:
	booksForAdults(); //конструктор без параметров
	booksForAdults(const booksForAdults&); //конструктор копирования
	booksForAdults(string, string, string, string, string, string, string, int); //конструктор с параметрами
	~booksForAdults(); //деструктор без параметров
	void setData(); //метод, определяющий поля элемента
	void showData(); //метод, выводящий данные полей элемента
	void editData(); //метод, изменяющий данные полей элемента
	void showLabel(); //метод, выводящий полей элемента
	friend ostream& operator<<(ostream&, booksForAdults&); //перегрузка вывода
	friend istream& operator >> (istream&, booksForAdults&); //перегрузка ввода
	friend ofstream& operator<<(ofstream&, booksForAdults&); //перегрузка вывода
	friend ifstream& operator >> (ifstream&, booksForAdults&); //перегрузка ввода
	booksForAdults operator=(const booksForAdults&); //перегрузка оператора присваивания
	void showHeader(); //метод, показывающий заголовки элемента
};
