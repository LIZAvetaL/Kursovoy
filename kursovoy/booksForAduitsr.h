#pragma once
#include "individual.h"

class booksForAdults : public adultLibrary
{
protected:
	int year; //��� ������� �����
public:
	booksForAdults(); //����������� ��� ����������
	booksForAdults(const booksForAdults&); //����������� �����������
	booksForAdults(string, string, string, string, string, string, string, int); //����������� � �����������
	~booksForAdults(); //���������� ��� ����������
	void setData(); //�����, ������������ ���� ��������
	void showData(); //�����, ��������� ������ ����� ��������
	void editData(); //�����, ���������� ������ ����� ��������
	void showLabel(); //�����, ��������� ����� ��������
	friend ostream& operator<<(ostream&, booksForAdults&); //���������� ������
	friend istream& operator >> (istream&, booksForAdults&); //���������� �����
	friend ofstream& operator<<(ofstream&, booksForAdults&); //���������� ������
	friend ifstream& operator >> (ifstream&, booksForAdults&); //���������� �����
	booksForAdults operator=(const booksForAdults&); //���������� ��������� ������������
	void showHeader(); //�����, ������������ ��������� ��������
};
