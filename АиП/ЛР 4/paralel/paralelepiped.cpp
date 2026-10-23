#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    int a, b, c;
    int V, S;
    cout << "Введите длину, ширину и высоту параллелепипеда: ";
    cin >> a >> b >> c;

    V = a * b * c;
    S = 2 * (a*b + a*c + b*c);
    cout << "Объем параллелепипеда: " << V << endl;
    cout << "Площадь поверхности параллелепипеда: " << S << endl;

    return 0;
}