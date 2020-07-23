#pragma once
#include "User1.h"
#include "booksForKids.h"
#include "booksForAduitsr.h"
#include "entity.h"
#include "magazinesForKids.h"
#include "magazinesForAdults.h"
#include "individual.h"
#include "service.h"
#include "Header.h"
#include "Proverka.h"

using namespace std;
template<class T>
struct Line
{
	T obj; //�������
	Line<T> *next; //��������� �� ��������� �������
	Line<T> *prev; //��������� �� ����������� �������
};

template<class T>
class List
{
private:
	Line<T> *begin; //��������� �� ������ ������
	Line<T> *end; //��������� �� ����� ������
	int count; //���������� ���������
public:
	List(); //����������� ��� ����������
	void push(const T&); //�������� ������� � ������
	void pushBack(const T&); //�������� ������� � �����
	T dellOne(); //������� ������� � ������
	T dellOneBack(); //������� ������� � �����
	void dellAll();  //������� ��� ��������
	int getCount();  //�����, ������������ ���� count
	T dellPoint(Line<T>*); //�������� ��������� ��������
	void show(); //�����, ��������� ��� �������� ������ � ������
	void showBack(); //�����, ��������� ��� �������� ������ � �����
	Line<T>* operator [] (int); //���������� ��������� []
	void readFile(string);  //������ ������ �� �����
	void writeFile(string); //������ ������ � ����
	bool isEmpty(); //�����, ����������� ������ �� �������
	void searchByFIO(string); //����� �������� �� �������
	void searchByGenre(string); //����� �������� �� ����
	void searchByAvailability(string); //����� �������� �� �������
	void searchByFIOGenre(string, string); //����� �������� �� ������� � ����
	void searchByFIOAvailability(string, string); //����� �������� �� ������� �������
	void searchByGenreAvailability(string, string); //����� �������� �� ���� � �������
	void searchByFIOGenreAvailability(string, string, string); //����� �������� �� �������, ���� � �������
	~List(); //���������� ��� ����������
};
