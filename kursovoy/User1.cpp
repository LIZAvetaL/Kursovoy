#include "User1.h"
#include"Proverka.h"
User::User()
{
	login = "";
	password = "";
	role = 0;
}

User::User(string login, string password, int role)
{
	this->login = login;
	this->password = password;
	this->role = role;
}

User::User(const User & obj)
{
	this->login = obj.login;
	this->password = obj.password;
	this->role = obj.role;
}

void User::setData()
{
	cout << "Введите логин: ";
	cin >> this->login;
	string str;
	cout << "Введите пароль: ";
	str = input_password();
	this->password = (string)str;//копирование строк
}

void User::setNewData()
{
	
	string str;//массив пароль
	string strAgain;
	cout << "Введите логин: ";
	cin>>this->login ;
	int count = 0;
	do {
		if (count != 0)
		{
			cout << "Введенные пароли не совпадают!" << endl;
		}
		cout << "Введите пароль: ";
		str = input_password();
		cout << endl;
		cout << "Повторите пароль: ";
		strAgain = input_password();
		cout << endl;
		count++;
	} while (str != strAgain);
	this->password = (string)str;
	this->role = 1;
}

string User::input_password()
{
	char ch;
	string password;
	while ( 1)
	{
		ch = _getwch();
		if (ch == 13 || ch == 32) break;
		if (ch == 8 && password != "")
		{
			password.pop_back();
			cout << ch;
		}
		else
		{
			if (ch != 8) {
				password += ch;
				cout << '*';
			}
		}
	}
	cout << endl;
	return password;
}

bool User::checkAuth()
{
	ifstream fin("Users.txt");
	User obj;
	while (fin >> obj) {
		if (this->login == obj.login && this->password == obj.password)
		{
			fin.close();
			return true;
		}
	}
	fin.close();
	return false;
}

void User::checkDB()
{
	ifstream fin("Users.txt");
	if (!fin.is_open())
	{
		ofstream fout("Users.txt");
		SetColor(Red, Black);
		cout << "!!! Файл с данными пользователей не был найден" << endl;
		SetColor(LightGreen, Black);
		cout << " Используйте Admin | qwerty для входа" << endl;
		SetColor(White, Black);
		fout << "Admin" << " " << "qwerty"<<" " <<"0"<<"\n";
		fout.close();
	}
	fin.close();
}

int User::authorization()
{
	User user;
	int decision;
	user.checkDB();
	SetColor(Black, Green);
	cout << setw(80) << "Для входа в программу пройдите авторизацию" << endl;
	SetColor(White, Black);
	cout << "1 - Вход в Аккаунт\n2 - Регистрация" << endl;
	decision = security_for_any_numbers_i(1, 2);
	switch (decision) {
	case 1:
		SetColor(White, Black);
		user.setData();
		while (!user.checkAuth())
		{
			system("cls");
			SetColor(Red, Black);
			cout << setw(30) << "!!! Неправильный логин или пароль" << endl;
			SetColor(White, Black);
			cout << "1. Продолжить" << endl;
			cout << "2. Выход" << endl << endl;
			cout << "Ваше решение: ";
			decision = security_for_any_numbers_i(1, 2);
			if (decision == 1)
			{
				user.setData();
			}
			else {
				exit(0);
			}
		}
		SetColor(LightGreen, Black);
		cout << endl << endl;
		cout << "                                                Успешная авторизация" << endl;
		Sleep(1000);
		SetColor(White, Black);
		system("cls");
		if (user.role == 0) return 0;
		else return 1;
	case 2:
		user.setNewData();
		user.writeAccount();
		return 2;
	}
	
	
}

void User::writeAccount()
{
	ofstream fadd("Users.txt", ios::app);
	fadd << endl;
	fadd << this->login << " "
		<< this->password << " "
		<< this->role;
	fadd.close();
}

User::~User()
{
}

ifstream& operator >> (ifstream & fin, User & obj)
{
	fin >> obj.login;
	fin >> obj.password;
	fin >> obj.role;
	return fin;
}
ostream & operator<<(ostream & sout, User & obj)
{
	sout << obj.login << " " << obj.password << endl;
	return sout;
}
istream & operator >> (istream & sin, User & obj)
{
	cout << "Введите логин: ";
	sin >> obj.login;
	cout << "Введите пароль: ";
	sin >> obj.password;
	return sin;
}
ofstream& operator<<(ofstream & fout, User & obj)
{
	fout << obj.login << " " << obj.password<<" "<<obj.role;
	return fout;
}

