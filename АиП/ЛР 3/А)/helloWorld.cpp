#include <clocale>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    cout << "A\tA\tA\tA\tA" << endl;
    cout << "\t\tA\tA\tA" << endl;
    cout << "\t\t\tA\t" << endl;
    cout << "\t\tA\tA\tA" << endl;
    cout << "A\tA\tA\tA\tA" << endl;
}
