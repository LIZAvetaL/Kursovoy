#pragma once
#include "individual.h"

class magazinesForAdults : public adultLibrary
{
protected:
	int number; //номер выпуска журнала
public:
	magazinesForAdults(); //конструктор без параметров
	magazinesForAdults(const magazinesForAdults&); //конструктор копирования
	magazinesForAdults(string, string, string, string, string, string, string, int); //конструктор с параметрами
	~magazinesForAdults(); //деструктор без параметров
	void setData(); //метод, определяющий поля элемента 
	void showData(); //метод, выводящий данные полей элемента
	void editData(); //метод, изменяющий данные полей элемента
	void showLabel(); //метод, выводящий полей элемента
	friend ostream& operator<<(ostream&, magazinesForAdults&); //перегрузка вывода
	friend istream& operator >> (istream&, magazinesForAdults&); //перегрузка ввода
	friend ofstream& operator<<(ofstream&, magazinesForAdults&); //перегрузка вывода
	friend ifstream& operator >> (ifstream&, magazinesForAdults&); //перегрузка ввода
	magazinesForAdults operator=(const magazinesForAdults&); //перегрузка оператора присваивания
	void showHeader(); //метод, показывающий заголовки элемента
};