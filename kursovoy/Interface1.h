#pragma once
#include "Spisok.cpp"

template<class T>
class Interface
{
	T obj; //шаблонная переменная
public:
	Interface() {} //конструктор без параметров
	Interface(const T& obj); //конструктор копирования
	void mainMenu(int); //главное меню
	void menuForAdminOrClient();
	void orderMenu( string, int); //основное меню
	int type_library(); //метод, возвращающий тип клиента
	void error(); //вывод сообщения при ошибке
	int category(); //выбор типа услуги
	int action_data(); //выбор действия
	int action1_data(); //выбор действия
	int mesto_data(); //выбор при долбавлении элемента
	int delete_mesto_data(); //выбор при удалении элемента
	int type_search_data(); //выбор при поиске элемента
	int search1(); //выбор при поиске по 1 параметру
	int search2(); //выбор при поиске по 2 параметрам
	int show_mesto_data(); //выбор при выводе на экран
	void success(); //сообщение об успешном выполнении действия
	void empty1(); //сообщение при пустом списке
	void type_of_books_For_Kids(int);
	void type_of_books_For_Adults(int);
	void add_data(List<T> &);
	void delete_data(List<T> &);
	void search_data(List<T> &);
	void show_data(List<T>&);
	void editing_data(List<T>&);
	~Interface() {} //деструктор без параметров
};


