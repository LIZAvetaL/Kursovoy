#include"Proverka.h"
int security_for_any_numbers_i(int border1, int border2)//проверка с границами
{
    int A;
    while (!(cin >> A) || A< border1 || A>border2 || cin.get() != '\n')
    {
        cout << "Неверный вввод! Попробуйте снова.\n";
        cin.clear();
        cin.ignore(256, '\n');
    }
    return A;
}
string input_mesto()
{
    string ch;
    bool flag = true;
    while (flag)
    {
        getline(cin, ch);
        if (ch == "+" || ch == "-")
            break;
        cout << "Неверный вввод! Попробуйте снова.\n";
    }
    return ch;
}


