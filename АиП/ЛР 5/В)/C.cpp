#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int key;
    double value;

    cout << "Введите номер элемента (1 - a, 2 - c, 3 - h, 4 - S): ";
    cin >> key;

    cout << "Введите значение элемента: ";
    cin >> value;

    double a, c, h, S;

    switch (key)
    {
    case 1:
        a = value;
        c = a * sqrt(2);
        h = c / 2.0;
        S = c * h / 2.0;
        break;

    case 2:
        c = value;
        a = c / sqrt(2);
        h = c / 2.0;
        S = c * h / 2.0;
        break;

    case 3:
        h = value;
        c = 2.0 * h;
        a = c / sqrt(2);
        S = c * h / 2.0;
        break;

    case 4:
        S = value;
        c = sqrt(4.0 * S);
        a = c / sqrt(2);
        h = c / 2.0;
        break;

    default:
        cout << "Ошибка, номер элемента должен быть от 1 до 4." << endl;
        return 1;
    }

    cout << "\nРезультаты:" << endl;
    cout << "1. Катет a = " << a << endl;
    cout << "2. Гипотенуза c = " << c << endl;
    cout << "3. Высота h = " << h << endl;
    cout << "4. Площадь S = " << S << endl;

    return 0;
}
