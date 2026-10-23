#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    const double PI = 3.14159;
    int a;
    cout << "Введите угол в градусах: ";
    cin >> a;

    while (a <= 0 || a >= 360) {
        cout << "Введите значение между 0 и 360: ";
        cin >> a;
    }

    double radians = a * PI / 180.0;
    cout << "Число в радианах: " << radians << endl;

    return 0;
}