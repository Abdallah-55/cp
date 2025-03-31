#include <iostream>
using namespace std;

int main()
{
    long long x, factorial = 1, sum = 0;
    cin >> x;
    while (x--)
    {
        factorial *= x + 1;
    }
    while (factorial)
    {
        sum += factorial % 10;
        factorial /= 10;
    }
    cout << (string)((sum % 2) ? "Adham" : "Kholy");
}
