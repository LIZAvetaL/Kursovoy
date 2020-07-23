#pragma once
#include "service.h"

class schoolLibrary : public service
{
protected:
	string nameOfChild, school; //название организации
public:
	schoolLibrary(); //конструктор без параметров
	schoolLibrary(const schoolLibrary&); //конструктор копирования
	schoolLibrary(string, string, string, string, string, string, string); //конструктор с параметрами
	~schoolLibrary(); //деструктор без параметров
	void setData(); //метод, определяющий поля элемента
	void showData(); //метод, выводящий данные полей элемента
	void editData(); //метод, изменяющий данные полей элемента
	void showLabel(); //метод, выводящий полей элемента
	friend ostream& operator<<(ostream&, schoolLibrary&); //перегрузка вывода
	friend istream& operator >> (istream&, schoolLibrary&); //перегрузка ввода
	schoolLibrary operator=(const schoolLibrary&); //перегрузка оператора присваивания
	friend ofstream& operator<<(ofstream&, schoolLibrary&); //перегрузка вывода
	friend ifstream& operator >> (ifstream&, schoolLibrary&); //перегрузка ввода
	void showHeader(); //метод, показывающий заголовки элемента
	friend bool compareNameOrganization(const schoolLibrary *, const schoolLibrary *, int); //метод,сравнивающий поле name_organization
};