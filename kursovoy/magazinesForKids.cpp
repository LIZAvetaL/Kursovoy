#include "magazinesForKids.h"

magazinesForKids::magazinesForKids() : schoolLibrary()
{
    number = 0;
}

magazinesForKids::magazinesForKids(const magazinesForKids& obj) : schoolLibrary(obj)
{
    this->number = obj.number;
}

magazinesForKids::magazinesForKids (string author, string pubHouse, string nameOfBook, string genre, string availability, string nameOfChild, string school, int number) : schoolLibrary(author, pubHouse, nameOfBook, genre, availability, nameOfChild, school)
{
    this->number = number;
}

magazinesForKids::~magazinesForKids()
{
}
void magazinesForKids::setData()
{
	schoolLibrary::setData();
    cout << "������� ����� �������: ";
    number=security_for_any_numbers_i(0, 2019);
}

void magazinesForKids::showHeader()
{
    SetColor(LightRed, Black);
    cout << "|---------------------------------------������-------------------------------------------|" << endl;
	schoolLibrary::showHeader();
    cout << setw(13) << "����� �������" << "|" << endl;
    cout << "|----------------------------------------------------------------------------------------|" << endl;
    SetColor(White, Black);
}

void magazinesForKids::showData()
{
	schoolLibrary::showData();
    cout << setw(13) << left << number << "|" << endl;
}

void magazinesForKids::editData()
{
	schoolLibrary::editData();
    cout << "8.����� �������" << endl;
}

void magazinesForKids::showLabel()
{
	schoolLibrary::showLabel();
    cout << "8. ����� �������" << endl;
}

magazinesForKids magazinesForKids::operator=(const magazinesForKids &  obj)
{
	schoolLibrary::operator=(obj);
    this->number = obj.number;
    return *this;
}

ostream & operator<<(ostream & sout, magazinesForKids & obj)
{
    sout << dynamic_cast<schoolLibrary&>(obj); //���������� ���� � schoolLibrary
    sout << setw(13) << obj.number << "|" << endl;
    return sout;
}

istream & operator >> (istream & sin, magazinesForKids & obj)
{
    sin >> dynamic_cast<schoolLibrary&>(obj); //���������� ���� � schoolLibrary
    cout << "������� ����� �������: ";
    cin >> obj.number;
    return sin;
}
ofstream & operator<<(ofstream & fout, magazinesForKids & obj)
{
    fout << dynamic_cast<schoolLibrary&>(obj); //���������� ���� � schoolLibrary
    fout << obj.number << "\n";
    return fout;
}

ifstream & operator >> (ifstream & fin, magazinesForKids & obj)
{
    fin >> dynamic_cast<schoolLibrary&>(obj); //���������� ���� � schoolLibrary
    fin >> obj.number;
    return fin;
}

