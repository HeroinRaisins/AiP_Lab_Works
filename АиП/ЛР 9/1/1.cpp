#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    for (int n = 300; n <= 600; ++n)
    {
        int sum = 0;

        for (int d = 2; d < n; ++d)
        {
            if (n % d == 0)
            {
                sum += d;
            }
        }

        if (sum % 10 == 0)
        {
            cout << n << " (сумма делителей: " << sum << ")\n";
        }
    }
    return 0;
}