#pragma once
#include "Header.h"

class User
{
private:
	string login;
	string password;
	int role;
public:
	User();
	User(string, string,int);
	User(const User&);
	void setData();
	void setNewData();
	int authorization();
	bool checkAuth();
	void checkDB();
	string input_password();
	void writeAccount();
	friend ostream& operator<<(ostream&, User&);
	friend istream& operator >> (istream&, User&);
	friend ofstream& operator<<(ofstream&, User&);
	friend ifstream& operator >> (ifstream&, User&);
	~User();
};

