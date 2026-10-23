#include <iostream>
#include <clocale>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y;

    cout << "Введите координату x: ";
    cin >> x;
    cout << "Введите координату y: ";
    cin >> y;

    if (x < -1 || x > 5)
    {
        cout << "Да, точка попадает в область I или III." << endl;
    }
    else
    {
        cout << "Нет точка не попадает в эти области (она находится в области II)." << endl;
    }

    return 0;
}
