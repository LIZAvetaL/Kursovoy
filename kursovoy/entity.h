#pragma once
#include "service.h"

class schoolLibrary : public service
{
protected:
	string nameOfChild, school; //�������� �����������
public:
	schoolLibrary(); //����������� ��� ����������
	schoolLibrary(const schoolLibrary&); //����������� �����������
	schoolLibrary(string, string, string, string, string, string, string); //����������� � �����������
	~schoolLibrary(); //���������� ��� ����������
	void setData(); //�����, ������������ ���� ��������
	void showData(); //�����, ��������� ������ ����� ��������
	void editData(); //�����, ���������� ������ ����� ��������
	void showLabel(); //�����, ��������� ����� ��������
	friend ostream& operator<<(ostream&, schoolLibrary&); //���������� ������
	friend istream& operator >> (istream&, schoolLibrary&); //���������� �����
	schoolLibrary operator=(const schoolLibrary&); //���������� ��������� ������������
	friend ofstream& operator<<(ofstream&, schoolLibrary&); //���������� ������
	friend ifstream& operator >> (ifstream&, schoolLibrary&); //���������� �����
	void showHeader(); //�����, ������������ ��������� ��������
	friend bool compareNameOrganization(const schoolLibrary *, const schoolLibrary *, int); //�����,������������ ���� name_organization
};