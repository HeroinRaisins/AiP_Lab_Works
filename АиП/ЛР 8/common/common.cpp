#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    char st[6];
    char ch;

    cout << "type characters and press Enter: ";
    cin >> st;

    ch = st[0];
    st[0] = st[4];
    st[4] = ch;

    cout << "the result is: " << st << '\n';

    cin.get();
    return 0;
}