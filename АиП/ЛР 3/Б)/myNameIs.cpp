#include <clocale>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int age;
    cout << "Введите ваш возраст: ";
    cin >> age;
    string name;
    cout << "Введите ваше имя: ";
    cin >> name;
    cout << "Это моя вторая программа на C++!" << endl;
    cout << "Меня зовут " << name << ", мне " << age << " лет." << endl;
    return 0;
}
