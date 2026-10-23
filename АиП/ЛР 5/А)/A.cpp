#include <iostream>
#include <clocale>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, temp, digit;
    long long sum_cubes = 0;
    cout << "Введите число: ";
    cin >> n;

    int original = n;
    if (original < 0)
    {
        original = -original;
    }
    temp = original;

    while (temp > 0)
    {
        digit = temp % 10;
        sum_cubes += digit * digit * digit;
        temp /= 10;
    }

    long long kvadrat = (long long)original * original;
    long long uchetv_summa = 4 * sum_cubes;

    if (kvadrat == uchetv_summa)
    {
        cout << "Да, квадрат числа равен учетверённой сумме его цифр" << endl;
    }
    else
    {
        cout << "Нет, условие не выполняется" << endl;
    }

    return 0;
}
