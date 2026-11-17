#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите два целых числа A и B (A < B): ";
    if (!(cin >> a >> b))
    {
        cout << "Ошибка ввода.\n";
        return 1;
    }

    long long sum = 0;
    for (int i = a; i <= b; ++i)
    {
        sum += i;
    }

    cout << "Сумма чисел от " << a << " до " << b << " равна " << sum << '\n';
    return 0;
}