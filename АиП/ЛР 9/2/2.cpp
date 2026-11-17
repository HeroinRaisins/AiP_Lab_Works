#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a;
    int n;

    cout << "Введите вещественное число A и целое число N (> 0): ";
    if (!(cin >> a >> n) || n <= 0)
    {
        cout << "Ошибка ввода: N должно быть больше 0.\n";
        return 1;
    }

    double power = 1.0;
    for (int i = 1; i <= n; ++i)
    {
        power *= a;
        cout << "A^" << i << " = " << power << '\n';
    }

    return 0;
}