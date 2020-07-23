#pragma once
#include "individual.h"

class magazinesForAdults : public adultLibrary
{
protected:
	int number; //����� ������� �������
public:
	magazinesForAdults(); //����������� ��� ����������
	magazinesForAdults(const magazinesForAdults&); //����������� �����������
	magazinesForAdults(string, string, string, string, string, string, string, int); //����������� � �����������
	~magazinesForAdults(); //���������� ��� ����������
	void setData(); //�����, ������������ ���� �������� 
	void showData(); //�����, ��������� ������ ����� ��������
	void editData(); //�����, ���������� ������ ����� ��������
	void showLabel(); //�����, ��������� ����� ��������
	friend ostream& operator<<(ostream&, magazinesForAdults&); //���������� ������
	friend istream& operator >> (istream&, magazinesForAdults&); //���������� �����
	friend ofstream& operator<<(ofstream&, magazinesForAdults&); //���������� ������
	friend ifstream& operator >> (ifstream&, magazinesForAdults&); //���������� �����
	magazinesForAdults operator=(const magazinesForAdults&); //���������� ��������� ������������
	void showHeader(); //�����, ������������ ��������� ��������
};