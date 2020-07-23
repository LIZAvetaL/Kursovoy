#include "magazinesForAdults.h"

magazinesForAdults::magazinesForAdults() : adultLibrary()
{
    number = 0;
}

magazinesForAdults::magazinesForAdults(const magazinesForAdults& obj) : adultLibrary(obj)
{
    this->number = obj.number;
}

magazinesForAdults::magazinesForAdults(string author, string pubHouse, string nameOfBook, string genre, string availability, string nameOfMan, string work, int number) : adultLibrary(author, pubHouse, nameOfBook, genre, availability, nameOfMan, work)
{
    this->number = number;
}

magazinesForAdults::~magazinesForAdults()
{
}
void magazinesForAdults::setData()
{
    adultLibrary::setData();
    cout << "Введите номер журнала: ";
    number= security_for_any_numbers_i(0, 2019);
}

void magazinesForAdults::showHeader()
{
    SetColor(LightRed, Black);
    cout << "|---------------------------------------СПИСОК-------------------------------------------|" << endl;
    adultLibrary::showHeader();
    cout << setw(13) << "Номер журнала" << "|" << endl;
    cout << "|----------------------------------------------------------------------------------------|" << endl;
    SetColor(White, Black);
}

void magazinesForAdults::showData()
{
    adultLibrary::showData();
    cout << setw(13) << left << number << "|" << endl;
}

void magazinesForAdults::editData()
{
    adultLibrary::editData();
    cout << "8.Номер журнала" << endl;
}

void magazinesForAdults::showLabel()
{
    adultLibrary::showLabel();
    cout << "8. Номер журнала" << endl;
}

magazinesForAdults magazinesForAdults::operator=(const magazinesForAdults &  obj)
{
    adultLibrary::operator=(obj);
    this->number = obj.number;
    return *this;
}

ostream & operator<<(ostream & sout, magazinesForAdults & obj)
{
	sout << dynamic_cast<adultLibrary&>(obj); //Приведение типа к entity
    sout << setw(13) << obj.number << "|" << endl;
    return sout;
}

istream & operator >> (istream & sin, magazinesForAdults & obj)
{
    sin >> dynamic_cast<adultLibrary&>(obj); //Приведение типа к entity
    cout << "Введите Номер журнала: ";
    cin >> obj.number;
    return sin;
}
ofstream & operator<<(ofstream & fout, magazinesForAdults & obj)
{
    fout << dynamic_cast<adultLibrary&>(obj); //Приведение типа к entity
    fout << obj.number << "\n";
    return fout;
}

ifstream & operator >> (ifstream & fin, magazinesForAdults & obj)
{
    fin >> dynamic_cast<adultLibrary&>(obj); //Приведение типа к entity
    fin >> obj.number;
    return fin;
}

