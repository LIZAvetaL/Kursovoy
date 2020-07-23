#include "individual.h"

adultLibrary::adultLibrary() : service()
{
    nameOfMan = "";
    work = "";
}

adultLibrary::adultLibrary(const adultLibrary& obj) : service(obj)
{
    this->nameOfMan = obj.nameOfMan;
    this->work = obj.work;
}

adultLibrary::adultLibrary(string author, string pubHouse, string nameOfBook, string genre, string availability, string nameOfMan, string work) : service(author, pubHouse, nameOfBook, genre, availability)
{
    this->nameOfMan = nameOfMan;
    this->work = work;
}

adultLibrary::~adultLibrary()
{
}

void adultLibrary::setData()
{
    service::setData();
    cout << "Введите Фамилию работника(последнего пользователя или текущего): ";
    getline(cin, nameOfMan);
    cout << "Введите место работы: ";
    getline(cin, work);
}

void adultLibrary::showHeader()
{
    service::showHeader();
    cout << setw(13) << "Фамилия" << "|" << setw(13) << "Место работы" << "|";
}

void adultLibrary::showData()
{
    service::showData();
    cout << setw(13) << left << nameOfMan << "|" << setw(13) << left << work << "|";
}

void adultLibrary::editData()
{
    service::editData();
    SetColor(Green, Black);
    cout << "                                         | 6. Фамилия                             |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 7. Место работы                        |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

void adultLibrary::showLabel()
{
    service::showLabel();
    SetColor(Green, Black);
    cout << "                                         | 6. Фамилия                             |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 7. Место работы                        |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

adultLibrary adultLibrary::operator=(const adultLibrary &  obj)
{
    service::operator=(obj);
    this->nameOfMan = obj.nameOfMan;
    this->work = obj.work;
    return *this;
}

ostream & operator<<(ostream & sout, adultLibrary & obj)
{
    sout << dynamic_cast<service&>(obj); //Приведение типа к service
    sout << setw(13) << obj.nameOfMan << "|" << setw(13) << obj.work << "|";
    return sout;
}

istream & operator >> (istream & sin, adultLibrary & obj)
{
    string temp;
    sin >> dynamic_cast<service&>(obj); //Приведение типа к service
    cout << "Введите Фамилию: ";
    sin >> obj.nameOfMan;
    cout << "Введите место работы: ";
    sin >> obj.work;
    return sin;
}
ofstream & operator<<(ofstream & fout, adultLibrary & obj)
{
    fout << dynamic_cast<service&>(obj); //Приведение типа к service
    fout << obj.nameOfMan << " " << obj.work << " ";
    return fout;
}

ifstream & operator >> (ifstream & fin, adultLibrary & obj)
{
    fin >> dynamic_cast<service&>(obj); //Приведение типа к service
    fin >> obj.nameOfMan >> obj.work;
    return fin;
}
