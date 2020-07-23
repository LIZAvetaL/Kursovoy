#pragma once
#include "service.h"

class adultLibrary : public service
{
protected:
	string nameOfMan, work; //������ � ����� ������ ��������
public:
	adultLibrary(); //����������� ��� ����������
	adultLibrary(const adultLibrary&); //����������� �����������
	adultLibrary(string, string, string, string, string, string, string); //����������� � �����������
	~adultLibrary(); //���������� ��� ����������
	void setData(); //�����, ������������ ���� ��������
	void showData(); //�����, ��������� ������ ����� ��������
	void editData(); //�����, ���������� ������ ����� ��������
	void showLabel(); //�����, ��������� ����� ��������
	friend ostream& operator<<(ostream&, adultLibrary&); //���������� ������
	friend istream& operator >> (istream&, adultLibrary&); //���������� �����
	adultLibrary operator=(const adultLibrary&); //���������� ��������� ������������
	friend ofstream& operator<<(ofstream&, adultLibrary&); //���������� ������
	friend ifstream& operator >> (ifstream&, adultLibrary&); //���������� �����
	void showHeader(); //�����, ������������ ��������� ��������

};