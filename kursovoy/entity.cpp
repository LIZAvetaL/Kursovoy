#include "entity.h"

schoolLibrary::schoolLibrary() : service()
{
    nameOfChild = "";
    school = "";
}

schoolLibrary::schoolLibrary(const schoolLibrary& obj) : service(obj)
{
    this->nameOfChild = obj.nameOfChild;
    this->school = obj.school;
}

schoolLibrary::schoolLibrary(string author, string pubHouse, string nameOfBook, string genre, string availability, string nameOfChild, string school) : service(author, pubHouse, nameOfBook, genre, availability)
{
    this->nameOfChild = nameOfChild;
    this->school = school;
}

schoolLibrary::~schoolLibrary()
{
}

void schoolLibrary::setData()
{
    service::setData();
    cout << "Введите фамилию ребёнка(последнего читателя или текущего): ";
    getline(cin, nameOfChild);
    cout << "Введите название школы ребёнка: ";
    getline(cin, school);
}

void schoolLibrary::showHeader()
{
    service::showHeader();
    cout << setw(13) << "Фамилия" << "|" << setw(13) << "Название школы" << "|";
}

void schoolLibrary::showData()
{
    service::showData();
    cout << setw(13) << left << nameOfChild << "|" << setw(13) << left << school << "|";
}

void schoolLibrary::editData()
{
    service::editData();
    SetColor(Green, Black);
    cout << "                                         | 6. Фамилия Ребёнка                     |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 7. Название школы                      |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

void schoolLibrary::showLabel()
{
    service::showLabel();
    SetColor(Green, Black);
    cout << "                                         | 6. Фамилия Ребёнка                     |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 7. Название школы                      |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

schoolLibrary schoolLibrary::operator=(const schoolLibrary &  obj)
{
    service::operator=(obj);
    this->nameOfChild = obj.nameOfChild;
    this->school = obj.school;
    return *this;
}

ostream & operator<<(ostream & sout, schoolLibrary & obj)
{
    sout << dynamic_cast<service&>(obj); //Приведение типа к service
    sout << setw(13) << obj.nameOfChild << "|";
    sout << setw(13) << obj.school << "|";
    return sout;
}

istream & operator >> (istream & sin, schoolLibrary & obj)
{
    string temp;
    sin >> dynamic_cast<service&>(obj); //Приведение типа к service
    cout << "Введите фамилию ребёнка: ";
    sin >> obj.nameOfChild;
    cout << "Введите название школы ребёнка: ";
    sin >> obj.school;
    return sin;
}
ofstream & operator<<(ofstream & fout, schoolLibrary & obj)
{
    fout << dynamic_cast<service&>(obj); //Приведение типа к service
    fout << obj.nameOfChild << " ";
    fout << obj.school << " ";
    return fout;
}

ifstream & operator >> (ifstream & fin, schoolLibrary & obj)
{
    fin >> dynamic_cast<service&>(obj); //Приведение типа к service
    fin >> obj.nameOfChild;
    fin >> obj.school;
    return fin;
}

