#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    long long a, b;
    cout << "Введите два целых числа a и b: ";
    if (!(cin >> a >> b)) {
        cout << "Ошибка ввода.\n";
        return 1;
    }

    long long x = a < 0 ? -a : a;
    long long y = b < 0 ? -b : b;

    while (y != 0) {
        long long remainder = x % y;
        x = y;
        y = remainder;
    }

    long long d = x;
    cout << "НОД: " << d << '\n';

    if (a == 0 || b == 0) {
        cout << "НОК: 0 (одно из чисел равно нулю)\n";
    } else {
        long long lcm = (a / d) * b;
        if (lcm < 0) lcm = -lcm;
        cout << "НОК: " << lcm << '\n';
    }
    return 0;
}