#include "Interface1.h"

template<class T>
Interface<T>::Interface(const T& obj)
{
    this->obj = obj.obj;
}

template<class T>
void Interface<T>::menuForAdminOrClient()
{
    User auth;
    int flag = 1;
	Interface<bool> design;
	int role;
    while (flag == 1)
    {
        role = auth.authorization();
        if (role == 0)
            design.mainMenu(0);
            if (role == 1)
                design.mainMenu(1);
        cout << "Для повторной авторизации нажмите 1" << endl;
        cin >> flag;
    }
}

template<class T>
void Interface<T>::mainMenu(int rol)
{
    int role = rol;
    int decision;
    while (true)
    {
         decision = type_library();
        switch (decision)
        {
        case 1:
            type_of_books_For_Kids(role);
            break;
        case 2:
            type_of_books_For_Adults(role);
            break;
        case 3:
            system("cls");
            return;
        default:
            system("cls");
            error();
            break;
        }
    }
}

template<class T>
void Interface<T>::orderMenu(string fileName, int role)
{
    List<T> list;
    int decision, decision3;
    int yes; T value;
    bool flag = true;
    list.readFile(fileName);
    while (flag)
    {
        if (role == 0)
        {
            switch (action_data())
            {
            case 1:
                add_data(list);
                list.writeFile(fileName);
                break;
            case 2:
                delete_data(list);
                list.writeFile(fileName);
                break;
            case 3:
                search_data(list);
                break;
            case 4:
                show_data(list);
                break;
            case 5:
                editing_data(list);
                list.writeFile(fileName);
                break;
			case 6:
				system("cls");
				flag = false;
				break;
            }
        }
        if (role == 1)
        {
            switch (action1_data())
            {
            case 1:
                add_data(list);
                list.writeFile(fileName);
                break;
            case 2:
                show_data(list);
                break;
            case 3:
                editing_data(list);
                list.writeFile(fileName);
                break;
			case 4:
				system("cls");
				flag = false;
				break;
            }
        }
    }
}

template<class T>
int Interface<T>::type_library()
{
    int decision;
    cout << "                                         С какими данными вы хотите работать? " << endl;
    SetColor(Green, Black);
    cout << "                                       ----------------------------------------" << endl;
    cout << "                                       | 1. Библиотека для школьников         |" << endl;
    cout << "                                       |--------------------------------------|" << endl;
    cout << "                                       | 2. Библиотека для рабочих            |" << endl;
    cout << "                                       |--------------------------------------|" << endl;
    cout << "                                       | 3. Выход                             |" << endl;
    cout << "                                       ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "Ваше решение: ";
    SetColor(White, Black);
    decision= security_for_any_numbers_i(1,3);
    return decision;
}

template<class T>
void Interface<T>::error()
{
    cout << endl << endl;
    SetColor(Red, Black);
    cout << endl;
    cout << "!!! Такой подкатегории не существует" << endl;
    SetColor(White, Black);
}

template<class T>
int Interface<T>::category()
{
    int decision;
    system("cls");
    SetColor(White, Black);
    cout << "                                          Выберите подкатегорию данных" << endl;
    SetColor(Green, Black);
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 1. Книги                             |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 2. Журналы                          |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 3. Назад                             |" << endl;
    cout << "                                     ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "Ваше решение: ";
    SetColor(White, Black);
    decision= security_for_any_numbers_i(1,3);
    return decision;
}

template<class T>
int Interface<T>::action_data()
{
    int decision;
    system("cls");
    SetColor(White, Black);
    cout << "                                                   Действия с данными" << endl;
    SetColor(Green, Black);
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 1. Добавить элементы                 |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 2. Удалить элементы                  |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 3. Поиск элемента                    |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 4. Просмотреть список                |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 5. Редактирование списка             |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 6. Выход                             |" << endl;
    cout << "                                     ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "Ваше решение: ";
    SetColor(White, Black);
    decision= security_for_any_numbers_i(1,6);
    return decision;
}

template<class T>
int Interface<T>::action1_data()
{
    int decision;
    system("cls");
    SetColor(White, Black);
    cout << "                                                   Действия с данными" << endl;
    SetColor(Green, Black);
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 1. Добавить элементы                 |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 2. Просмотреть список                |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 3. Редактирование списка             |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 4. Выход                             |" << endl;
    cout << "                                     ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "Ваше решение: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 4);
    return decision;
}

template<class T>
int Interface<T>::mesto_data()
{
    int decision;
    system("cls");
    cout << "                                                   Выберите действие" << endl;
    SetColor(Green, Black);
    cout << "                                        ----------------------------------------" << endl;
    cout << "                                        | 1. Добавить в начало списка          |" << endl;
    cout << "                                        ----------------------------------------" << endl;
    cout << "                                        | 2. Добавить в конец списка           |" << endl;
    cout << "                                        ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "Ваше решение: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 2);
    return decision;
}

template<class T>
int Interface<T>::delete_mesto_data()
{
    int decision;
    system("cls");
    cout << "                                                Выберите действие" << endl;
    SetColor(Green, Black);
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 1. Удалить с начала списка           |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 2. Удалить с конца списка            |" << endl;
    cout << "                                     ----------------------------------------" << endl;
    cout << "                                     | 3. Удалить заданный элемент списка   |" << endl;
    cout << "                                     ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "Ваше решение: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 3);
    return decision;
}

template<class T>
int Interface<T>::type_search_data()
{
    int decision;
    system("cls");
    cout << "                                                      Выберите действие" << endl;
    SetColor(Green, Black);
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 1. Поиск по 1 параметру              |" << endl;
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 2. Поиск по 2 параметрам             |" << endl;
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 3. Поиск по 3 параметрам             |" << endl;
    cout << "                                            ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "Ваше решение: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 3);
    return decision;
}

template<class T>
int Interface<T>::search1()
{
    int decision;
    system("cls");
    cout << "                                                       Выберите действие" << endl;
    SetColor(Green, Black);
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 1. Поиск по фамилию автора           |" << endl;
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 2. Поиск по жанру книги              |" << endl;
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 3. Поиск по наличию в библиотеке     |" << endl;
    cout << "                                            ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "Ваше решение: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 3);
    return decision;
}

template<class T>
int Interface<T>::search2()
{
    int decision;
    system("cls");
    cout << "                                                     Выберите действие" << endl;
    SetColor(Green, Black);
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 1. Поиск по Фамилии и Жанру               |" << endl;
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 2. Поиск по Фамилии и Наличию           |" << endl;
    cout << "                                            ----------------------------------------" << endl;
    cout << "                                            | 3. Поиск по Жанру и Наличию            |" << endl;
    cout << "                                            ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "Ваше решение: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 3);
    return decision;
}

template<class T>
int Interface<T>::show_mesto_data()
{
    int decision;
    system("cls");
    cout << "                                                 Выберите действие" << endl;
    SetColor(Green, Black);
    cout << "                                       ----------------------------------------" << endl;
    cout << "                                       | 1. Просмотреть с начала              |" << endl;
    cout << "                                       ----------------------------------------" << endl;
    cout << "                                       | 2. Просмотреть с конца               |" << endl;
    cout << "                                       ----------------------------------------" << endl << endl;
    SetColor(LightBlue, Black);
    cout << "Ваше решение: ";
    SetColor(White, Black);
    decision = security_for_any_numbers_i(1, 2);
    return decision;
}

template<class T>
void Interface<T>::success()
{
    SetColor(LightGreen, Black);
    cout << endl;
    cout << " Успешное выполнение действия" << endl;
    Sleep(1000);
    SetColor(White, Black);
}

template<class T>
void Interface<T>::empty1()
{
    SetColor(Red, Black);
    cout << endl;
    cout << "!!! Список пуст" << endl;
    Sleep(1000);
    SetColor(White, Black);
}

template<class T>
void Interface<T>::type_of_books_For_Kids(int role)
{
    string fileName;
    int decision;
    decision = category();
    switch (decision)
    {
    case 1:
    {
        Interface <booksForKids> design;
        fileName = "BookForKids.dat";
        design.orderMenu( fileName, role);
    }break;
    case 2:
    {
        Interface <magazinesForKids> design;
        fileName = "MagazinesForKids.dat";
        design.orderMenu( fileName, role);
    }break;
    case 3:
        system("cls");
        break;
    default:
        system("cls");
        error();
        break;
    }
}

template<class T>
void Interface<T>::type_of_books_For_Adults(int role)
{
    string fileName;
    int decision;
    decision = category();
    switch (decision)
    {
    case 1: {
        Interface <booksForAdults> design;
        fileName = "BooksForAdults.dat";
        design.orderMenu( fileName, role);
    }break;
    case 2: {
        Interface <magazinesForAdults> design;
        fileName = "MagazinesForAdults.dat";
        design.orderMenu( fileName, role);
    }break;
    case 3:
        system("cls");
        break;
    default:
        system("cls");
        error();
        break;
    }
}

template <class T>
void Interface<T>::add_data(List<T> &list)
{
    T value;
    int decision;
    decision = mesto_data();
    switch (decision)
    {
    case 1:
        system("cls");
        value.setData();
        list.push(value);
        success();
        break;
    case 2:
        system("cls");
        value.setData();
        list.pushBack(value);
        success();
        break;
    default:
        system("cls");
        error();
        break;
    }
}

template <class T>
void Interface<T>::delete_data(List<T> &list)
{
    T value;
    int decision,index;
    decision = delete_mesto_data();
    if (list.getCount() == 0)
        empty1();
    else {
        switch (decision)
        {
        case 1:
            list.dellOne();
            success();
            break;
        case 2:
            list.dellOneBack();
            success();
            break;
        case 3:
            system("cls");
            value.showHeader();
            list.show();
            cout << "Номер элемента: ";
            cin >> index;
            list.dellPoint(list[index]);
            success();
            break;
        default:
            system("cls");
            error();
            break;
        }
    }
}

template <class T>
void Interface<T>::search_data(List<T> &list)
{
    T value;
    int decision;
    string key;
    decision = type_search_data();
    system("cls");
    if (list.getCount() == 0)
        empty1();
    else {
        string key, key2, key3;
        switch (decision)
        {
        case 1:
            switch (search1())
            {
            case 1:
                cout << "Введите фамилию автора: ";
                cin >> key;
                cout << endl;
                list.searchByFIO(key);
                Sleep(10000);
                break;
            case 2:
                cout << "Введите жанр книги: ";
                cin >> key;
                cout << endl;
                list.searchByGenre(key);
                Sleep(10000);
                break;
            case 3:
                cout << "Укажите наличие в библиотеке: ";
                cin >> key;
                cout << endl;
                list.searchByAvailability(key);
                Sleep(10000);
                break;
            default:
                system("cls");
                error();
                break;
            } break;
        case 2:
            switch (search2())
            {
            case 1:
                cout << "Введите фамилию автора: ";
                cin >> key;
                cout << "Введите жанр книги: ";
                cin >> key2;
                cout << endl;
                list.searchByFIOGenre(key, key2);
                Sleep(10000);
                break;
            case 2:
                cout << "Введите фамилию автора: ";
                cin >> key;
                cout << "Укажите наличие в библиотеке: ";
                cin >> key2;
                cout << endl;
                list.searchByFIOAvailability(key, key2);
                Sleep(10000);
                break;
            case 3:
                cout << "Введите жанр книги: ";
                cin >> key;
                cout << "Укажите наличие в библиотеке: ";
                cin >> key2;
                cout << endl;
                list.searchByGenreAvailability(key, key2);
                Sleep(10000);
                break;
            default:
                system("cls");
                error();
                break;
            } break;
        case 3:
            cout << "Введите фамилию автора: ";
            cin >> key;
            cout << "Введите жанр книги: ";
            cin >> key2;
            cout << "Укажите наличие в библиотеке:  ";
            cin >> key3;
            cout << endl;
            list.searchByFIOGenreAvailability(key, key2, key3);
            Sleep(10000);
            break;
        default:
            system("cls");
            error();
            break;
        }
    }
}

template <class T>
void Interface<T>::show_data(List<T> &list)
{
    T value;
    int decision;
    int yes;
    decision = show_mesto_data();
    if (list.getCount() == 0)
        empty1();
    else {
        switch (decision)
        {
        case 1: {
            system("cls");
            value.showHeader();
            list.show();
            success();
            cout << "\nЖелаете вернуться в меню (1 - Да)?" << "\nВаш выбор: ";
            cin >> yes;
            break;
        }
        case 2:
            system("cls");
            value.showHeader();
            list.showBack();
            success();
            cout << "\nЖелаете вернуться в меню (1 - Да)?" << "\nВаш выбор: ";
            cin >> yes;

            break;
        default:
            system("cls");
            error();
            break;
        }
    }
}

template <class T>
void Interface<T>::editing_data(List<T> &list)
{
    string new1, new2, new3;
    T value;
    int index, yes;
    int decision;
    if (list.getCount() == 0)
        empty1();
    else {
        system("cls");
        value.showHeader();
        list.show();
        SetColor(Blue, Black);
        cout << endl << endl;
        cout << "Введите номер элемента для редактирования: ";
        cin >> index;
        cout << endl;
        int id;
        cout << "Выберите поле для редактирования(1 - 5): ";
        id = security_for_any_numbers_i(1, 5);
        cout << endl << endl;
        SetColor(White, Black);
        switch (id)
        {
        case 1:
            cout << "Введите новое значение: ";
            cin >> new1;
            list[index]->obj.setFIO(new1);
            value.showHeader();
            list.show();
            success();
            cout << "\nЖелаете вернуться в меню (1 - Да)?" << "\nВаш выбор: ";
            cin >> yes;
            if (yes == 1)
                break;
        case 2:
            cout << "Введите новое значение: ";
            cin >> new1;
            list[index]->obj.setPubHouse(new1);
            value.showHeader();
            list.show();
            success();
            cout << "\nЖелаете вернуться в меню (1 - Да)?" << "\nВаш выбор: ";
            cin >> yes;
            if (yes == 1)
                break;
        case 3:
            cout << "Введите новое значение: ";
            cin >> new1;
            list[index]->obj.setNameOfBook(new1);
            list.show();
            success();
            cout << "\nЖелаете вернуться в меню (1 - Да)?" << "\nВаш выбор: ";
            cin >> yes;
            if (yes == 1)
                break;
        case 4:
            cout << "Введите новое значение: ";
            cin >> new2;
            list[index]->obj.setGenre(new2);
            value.showHeader();
            list.show();
            success();
            cout << "\nЖелаете вернуться в меню (1 - Да)?" << "\nВаш выбор: ";
            cin >> yes;
            if (yes == 1)
                break;
        case 5:
            cout << "Введите новое значение: ";
            cin >> new3;
            list[index]->obj.setAvailability(new3);
            value.showHeader();
            list.show();
            success();
            cout << "\nЖелаете вернуться в меню (1 - Да)?" << "\nВаш выбор: ";
            cin >> yes;
            if (yes == 1) cout << endl;
            break;
        default:
            system("cls");
            error();
            break;
        }
    }
}


