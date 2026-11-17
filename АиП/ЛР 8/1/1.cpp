#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char ch;
    cout << "Введите символ: ";
    if (!(cin >> ch))
    {
        cout << "Ошибка ввода.\n";
        return 1;
    }

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Это заглавная английская буква .\n";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Это строчная английская буква.\n";
    }
    else
    {
        cout << "Это не английская буква.\n";
    }

    return 0;
}