#include <iostream>
using namespace std;

int main()
{
    long long t, x, a, n, tmp;
    cin >> t;
    while (t--)
    {
        cin >> x >> a;
        tmp = x;
        n = 0;
        while (tmp)
        {
            n = (tmp % 2) ? ++n : n;
            tmp /= 2;
        }
        if (a == n)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}