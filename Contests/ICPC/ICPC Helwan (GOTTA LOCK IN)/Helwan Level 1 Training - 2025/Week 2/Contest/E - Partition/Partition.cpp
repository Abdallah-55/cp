#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b = 0, c = 0;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a > 0)
        {
            b += a;
        }
        else
        {
            c += a;
        }
    }
    cout << b - c;
}