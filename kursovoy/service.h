#pragma once
#include "Header.h"
#include "Proverka.h"
class service
{
protected:
	string author, pubHouse, nameOfBook, genre, availability; //Фамилия клиента, дата регистрации, время регистрации
public:
	service(); //конструктор без параметров
	service(const service&); //конструктор копирования
	service(string, string, string, string, string); //конструктор с параметрами
	~service(); //деструктор без параметров
	void setData(); //метод, определяющий поля элемента
	void showData(); //метод, выводящий данные полей элемента
	void editData(); //метод, изменяющий данные полей элемента
	void showLabel(); //метод, выводящий полей элемента
	virtual string getFIO(); //метод, возвращающий fio
	virtual string getGenre(); //метод, возвращающий Genre
	virtual string getAvailability(); //метод, возвращающий Availability
	virtual void setFIO(string); //метод, изменяющий значение fio
	virtual void setPubHouse(string); //метод, изменяющий значение PubHouse
	virtual void setNameOfBook(string); //метод, изменяющий значение NameOfBook
	virtual void setGenre(string); //метод, изменяющий значение Genre
	virtual void setAvailability(string); //метод, изменяющий значение Availability
	friend ostream& operator<<(ostream&, service&); //перегрузка вывода
	friend istream& operator >> (istream&, service&); //перегрузка ввода
	friend ofstream& operator<<(ofstream&, service&); //перегрузка вывода
	friend ifstream& operator >> (ifstream&, service&); //перегрузка ввода
	service operator=(const service&); //перегрузка оператора присваивания
	void showHeader(); //метод, показывающий заголовки элемента
};
