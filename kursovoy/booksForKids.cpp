#include "booksForKids.h"

booksForKids::booksForKids() : schoolLibrary()
{
    year = 0;
}

booksForKids::booksForKids(const booksForKids& obj) : schoolLibrary(obj)
{
    this->year = obj.year;
}

booksForKids::booksForKids(string author, string pubHouse, string nameOfBook, string genre, string availability, string nameOfChild, string school, int year) : schoolLibrary(author, pubHouse, nameOfBook, genre, availability, nameOfChild, school)
{
    this->year = year;
}

booksForKids::~booksForKids()
{
}
void booksForKids::setData()
{
	schoolLibrary::setData();
    cout << "������� ��� ������� �����: ";
    year= security_for_any_numbers_i(0, 2019);
}

void booksForKids::showHeader()
{
    SetColor(LightRed, Black);
    cout << "|---------------------------------------������-------------------------------------------|" << endl;
	schoolLibrary::showHeader();
    cout << setw(7) << "��� �������" << "|" << endl;
    cout << "|----------------------------------------------------------------------------------------|" << endl;
    SetColor(White, Black);
}

void booksForKids::showData()
{
	schoolLibrary::showData();
    cout << setw(7) << left << this->year << "|" << endl;
}

void booksForKids::editData()
{
	schoolLibrary::editData();
    SetColor(Green, Black);
    cout << "                                         | 8. ��� �������                         |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

void booksForKids::showLabel()
{
	schoolLibrary::showLabel();
    SetColor(Green, Black);
    cout << "                                         | 8. ��� �������                         |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

booksForKids booksForKids::operator=(const booksForKids &  obj)
{
	schoolLibrary::operator=(obj);
    this->year = obj.year;
    return *this;
}

ostream & operator<<(ostream & sout, booksForKids & obj)
{
    sout << dynamic_cast<schoolLibrary&>(obj); //���������� ���� � schoolLibrary
    sout << setw(7) << obj.year << "|" << endl;
    return sout;
}

istream & operator >> (istream & sin, booksForKids & obj)
{
    sin >> dynamic_cast<schoolLibrary&>(obj); //���������� ���� � schoolLibrary
    cout << "������� ��� ������� �����: ";
    sin >> obj.year;
    return sin;
}
ofstream & operator<<(ofstream & fout, booksForKids & obj)
{
    fout << dynamic_cast<schoolLibrary&>(obj); //���������� ���� � schoolLibrary
    fout << obj.year << "\n";
    return fout;
}

ifstream & operator >> (ifstream & fin, booksForKids & obj)
{
    fin >> dynamic_cast<schoolLibrary&>(obj); //���������� ���� � entity
    fin >> obj.year;
    return fin;
}

