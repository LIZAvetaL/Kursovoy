#include "booksForAduitsr.h"

booksForAdults::booksForAdults() : adultLibrary()
{
    year = 0;
}

booksForAdults::booksForAdults(const booksForAdults& obj) : adultLibrary(obj)
{
    this->year = obj.year;
}

booksForAdults::booksForAdults(string author, string pubHouse, string nameOfBook, string genre, string availability, string nameOfMan, string work, int year) : adultLibrary(author, pubHouse, nameOfBook, genre, availability, nameOfMan, work)
{
    this->year = year;
}

booksForAdults::~booksForAdults()
{
}
void booksForAdults::setData()
{
	adultLibrary::setData();
    cout << "Введите год выпуска книги: ";
    year= security_for_any_numbers_i(0,2019);
}

void booksForAdults::showHeader()
{
    SetColor(LightRed, Black);
    cout << "|---------------------------------------СПИСОК-------------------------------------------|" << endl;
	adultLibrary::showHeader();
    cout << setw(7) << "Год выпуска" << "|" << endl;
    cout << "|----------------------------------------------------------------------------------------|" << endl;
    SetColor(White, Black);
}

void booksForAdults::showData()
{
	adultLibrary::showData();
    cout << setw(7) << left << this->year << "|" << endl;
}

void booksForAdults::editData()
{
	adultLibrary::editData();
    SetColor(Green, Black);
    cout << "                                         | 8. Год выпуска                         |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

void booksForAdults::showLabel()
{
	adultLibrary::showLabel();
    SetColor(Green, Black);
    cout << "                                         | 8. Год выпуска                         |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

booksForAdults booksForAdults::operator=(const booksForAdults &  obj)
{
	adultLibrary::operator=(obj);
    this->year = obj.year;
    return *this;
}

ostream & operator<<(ostream & sout, booksForAdults & obj)
{
    sout << dynamic_cast<adultLibrary&>(obj); //Приведение типа к entity
    sout << setw(7) << obj.year << "|" << endl;
    return sout;
}

istream & operator >> (istream & sin, booksForAdults & obj)
{
    sin >> dynamic_cast<adultLibrary&>(obj); //Приведение типа к entity
    cout << "Введите Год выпуска книги: ";
    sin >> obj.year;
    return sin;
}
ofstream & operator<<(ofstream & fout, booksForAdults & obj)
{
    fout << dynamic_cast<adultLibrary&>(obj); //Приведение типа к entity
    fout << obj.year << "\n";
    return fout;
}

ifstream & operator >> (ifstream & fin, booksForAdults & obj)
{
    fin >> dynamic_cast<adultLibrary&>(obj); //Приведение типа к entity
    fin >> obj.year;
    return fin;
}

