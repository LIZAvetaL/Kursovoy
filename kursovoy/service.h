#pragma once
#include "Header.h"
#include "Proverka.h"
class service
{
protected:
	string author, pubHouse, nameOfBook, genre, availability; //������� �������, ���� �����������, ����� �����������
public:
	service(); //����������� ��� ����������
	service(const service&); //����������� �����������
	service(string, string, string, string, string); //����������� � �����������
	~service(); //���������� ��� ����������
	void setData(); //�����, ������������ ���� ��������
	void showData(); //�����, ��������� ������ ����� ��������
	void editData(); //�����, ���������� ������ ����� ��������
	void showLabel(); //�����, ��������� ����� ��������
	virtual string getFIO(); //�����, ������������ fio
	virtual string getGenre(); //�����, ������������ Genre
	virtual string getAvailability(); //�����, ������������ Availability
	virtual void setFIO(string); //�����, ���������� �������� fio
	virtual void setPubHouse(string); //�����, ���������� �������� PubHouse
	virtual void setNameOfBook(string); //�����, ���������� �������� NameOfBook
	virtual void setGenre(string); //�����, ���������� �������� Genre
	virtual void setAvailability(string); //�����, ���������� �������� Availability
	friend ostream& operator<<(ostream&, service&); //���������� ������
	friend istream& operator >> (istream&, service&); //���������� �����
	friend ofstream& operator<<(ofstream&, service&); //���������� ������
	friend ifstream& operator >> (ifstream&, service&); //���������� �����
	service operator=(const service&); //���������� ��������� ������������
	void showHeader(); //�����, ������������ ��������� ��������
};
