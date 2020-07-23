#pragma once
#include "service.h"

class adultLibrary : public service
{
protected:
	string nameOfMan, work; //фамили и место работы читателя
public:
	adultLibrary(); //конструктор без параметров
	adultLibrary(const adultLibrary&); //конструктор копирования
	adultLibrary(string, string, string, string, string, string, string); //конструктор с параметрами
	~adultLibrary(); //деструктор без параметров
	void setData(); //метод, определяющий поля элемента
	void showData(); //метод, выводящий данные полей элемента
	void editData(); //метод, изменяющий данные полей элемента
	void showLabel(); //метод, выводящий полей элемента
	friend ostream& operator<<(ostream&, adultLibrary&); //перегрузка вывода
	friend istream& operator >> (istream&, adultLibrary&); //перегрузка ввода
	adultLibrary operator=(const adultLibrary&); //перегрузка оператора присваивания
	friend ofstream& operator<<(ofstream&, adultLibrary&); //перегрузка вывода
	friend ifstream& operator >> (ifstream&, adultLibrary&); //перегрузка ввода
	void showHeader(); //метод, показывающий заголовки элемента

};