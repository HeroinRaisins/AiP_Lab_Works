#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int MAX_LEN = 256;
    char arr[MAX_LEN];

    cout << "Введите строку: ";
    if (!cin.getline(arr, MAX_LEN))
    {
        cout << "Ошибка ввода.\n";
        return 1;
    }

    int digitCount = 0;
    for (int i = 0; arr[i] != '\0'; ++i)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            ++digitCount;
        }
    }

    cout << "Количество цифр: " << digitCount << '\n';
    return 0;
}