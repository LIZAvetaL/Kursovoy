#pragma once
#include "entity.h"

class booksForKids : public schoolLibrary
{
protected:
	int year; //�������� �����
public:
	booksForKids(); //����������� ��� ����������
	booksForKids(const booksForKids&); //����������� �����������
	booksForKids(string, string, string, string, string, string, string, int); //����������� � �����������
	~booksForKids();  //���������� ��� ����������
	void setData(); //�����, ������������ ���� ��������
	void showData(); //�����, ��������� ������ ����� ��������
	void editData(); //�����, ���������� ������ ����� ��������
	void showLabel(); //�����, ��������� ����� ��������
	friend ostream& operator<<(ostream&, booksForKids&); //���������� ������
	friend istream& operator >> (istream&, booksForKids&); //���������� �����
	friend ofstream& operator<<(ofstream&, booksForKids&); //���������� ������
	friend ifstream& operator >> (ifstream&, booksForKids&); //���������� �����
	booksForKids operator=(const booksForKids&); //���������� ��������� ������������
	void showHeader(); //�����, ������������ ��������� ��������
};
