#include "service.h"
service::service()
{
    author = "";
    pubHouse = "";
    nameOfBook = "";
    genre = "";
    availability = "";
}

service::service(const service &  obj)
{
    this->author = obj.author;
    this->pubHouse = obj.pubHouse;
    this->nameOfBook = obj.nameOfBook;
    this->genre = obj.genre;
    this->availability = obj.availability;
}

service::service(string author, string pubHouse, string nameOfBook, string genre, string availability)
{
    this->author = author;
    this->pubHouse = pubHouse;
    this->nameOfBook = nameOfBook;
    this->genre = genre;
    this->availability = availability;
}

service::~service()
{
}

void service::setData()
{
    string temp;
    cout << "Введите фамилию автора: ";
    getline(cin,author);
    cout << "Введите издательство: ";
    getline(cin, pubHouse);
    cout << "Введите название книги: ";
    getline(cin, nameOfBook);
    cout << "Введите жанр книги: ";
    getline(cin, genre);
    cout << "Укажите наличие книги в библиотеке(+ - есть, - -нет) : ";
     availability= input_mesto();
}

void service::showHeader()
{
    cout << "|" << setw(25) << left << "Автор" << "|" << setw(12) << "Издательстов" << "|" << setw(12) << "Название" << "|" << setw(11) << "Жанр" << "|" << setw(7) << "Наличие" << "|";
}

void service::showData()
{
    cout << "|" << setw(25) << left << author << "|" << setw(12) << pubHouse << "|" << setw(12) << nameOfBook << "|" << setw(11) << genre << "|" << setw(7) << availability << "|";
}

void service::editData()
{
    cout << "                                            Выберите поле для редактирования" << endl;
    SetColor(Green, Black);
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 1. Фамилия автора                      |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 2. Издательство                        |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 3. Название книг                       |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 4. Жанр книги                          |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 5. НАличие в библиотеке                |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

void service::showLabel()
{
    SetColor(Green, Black);
    cout << "                                        ------------------------------------------" << endl;
    cout << "                                         | 1. Фамилия автора                      |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 2. Издательство                        |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 3. Название книг                       |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 4. Жанр книги                          |" << endl;
    cout << "                                         ------------------------------------------" << endl;
    cout << "                                         | 5. НАличие в библиотеке                |" << endl;
    cout << "                                         ------------------------------------------" << endl;
}

service service::operator=(const service &  obj)
{
    this->author = obj.author;
    this->pubHouse = obj.pubHouse;
    this->nameOfBook = obj.nameOfBook;
    this->genre = obj.genre;
    this->availability = obj.availability;
    return *this;
}



ostream & operator<<(ostream & sout, service& obj)
{
    sout << "|" << setw(25) << left << obj.author << "|" << setw(12) << obj.pubHouse << "|" << setw(12) << obj.nameOfBook << "|" << setw(11) << obj.genre << "|" << setw(7) << obj.availability << "|";
    return sout;
}

istream & operator >> (istream & sin, service & obj)
{
    
    cout << "Введите фамилию автора: ";
    sin >> obj.author;
    cout << "Введите издательство: ";
    sin >> obj.pubHouse;
    cout << "Введите название книги: ";
    sin >> obj.nameOfBook;
    cout << "Введите жанр книги: ";
    sin >> obj.genre;
    cout << "Укажите наличие книги в библиотеке(+ -есть, - - нет): ";
    sin >> obj.availability;
    return sin;
}

ofstream & operator<<(ofstream & fout, service & obj)
{
    fout << obj.author << " " << obj.pubHouse << " " << obj.nameOfBook << " " << obj.genre << " " << obj.availability<<" ";
    return fout;
}

ifstream & operator >> (ifstream & fin, service & obj)
{
    fin >> obj.author;
    fin >> obj.pubHouse;
    fin >> obj.nameOfBook;
    fin >> obj.genre;
    fin >> obj.availability;
    return fin;
}

string service::getFIO()
{
    return this->author;
}

string service::getGenre()
{
    return this->genre;
}

string service::getAvailability()
{
    return this->availability;
}

void service::setFIO(string author)
{
    this->author = author;
}

void service::setPubHouse(string pubHouse)
{
    this->pubHouse = pubHouse;
}

void service::setNameOfBook(string nameOfBook)
{
    this->nameOfBook = nameOfBook;
}

void service::setGenre(string genre)
{
    this->genre = genre;
}

void service::setAvailability(string Availability)
{
    this->availability = Availability;
}
