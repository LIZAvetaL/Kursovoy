#pragma once
#include "entity.h"

class magazinesForKids : public schoolLibrary
{
protected:
	int number; //����� ������� �������
public:
	magazinesForKids(); //����������� ��� ����������
	magazinesForKids(const magazinesForKids&); //����������� �����������
	magazinesForKids(string, string, string, string, string, string, string, int); //����������� � �����������
	~magazinesForKids(); //���������� ��� ����������
	void setData(); //�����, ������������ ���� ��������
	void showData(); //�����, ��������� ������ ����� ��������
	void editData(); //�����, ���������� ������ ����� ��������
	void showLabel(); //�����, ��������� ����� ��������
	friend ostream& operator<<(ostream&, magazinesForKids&); //���������� ������
	friend istream& operator >> (istream&, magazinesForKids&); //���������� �����
	friend ofstream& operator<<(ofstream&, magazinesForKids&); //���������� ������
	friend ifstream& operator >> (ifstream&, magazinesForKids&); //���������� �����
	magazinesForKids operator=(const magazinesForKids&); //���������� ��������� ������������
	void showHeader(); //�����, ������������ ��������� ��������
};