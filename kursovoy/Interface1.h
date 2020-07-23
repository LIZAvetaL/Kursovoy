#pragma once
#include "Spisok.cpp"

template<class T>
class Interface
{
	T obj; //��������� ����������
public:
	Interface() {} //����������� ��� ����������
	Interface(const T& obj); //����������� �����������
	void mainMenu(int); //������� ����
	void menuForAdminOrClient();
	void orderMenu( string, int); //�������� ����
	int type_library(); //�����, ������������ ��� �������
	void error(); //����� ��������� ��� ������
	int category(); //����� ���� ������
	int action_data(); //����� ��������
	int action1_data(); //����� ��������
	int mesto_data(); //����� ��� ����������� ��������
	int delete_mesto_data(); //����� ��� �������� ��������
	int type_search_data(); //����� ��� ������ ��������
	int search1(); //����� ��� ������ �� 1 ���������
	int search2(); //����� ��� ������ �� 2 ����������
	int show_mesto_data(); //����� ��� ������ �� �����
	void success(); //��������� �� �������� ���������� ��������
	void empty1(); //��������� ��� ������ ������
	void type_of_books_For_Kids(int);
	void type_of_books_For_Adults(int);
	void add_data(List<T> &);
	void delete_data(List<T> &);
	void search_data(List<T> &);
	void show_data(List<T>&);
	void editing_data(List<T>&);
	~Interface() {} //���������� ��� ����������
};


