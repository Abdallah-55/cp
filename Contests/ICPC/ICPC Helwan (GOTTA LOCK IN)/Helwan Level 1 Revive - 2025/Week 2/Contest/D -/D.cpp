#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a = 0, b = 0;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        if ((i % 2 == 1 && (n - i) % 2 == 1) && (i != (n - i)))
        {
            a = i;
            b = n - i;
            break;
        }
    }
    if (a == 0 && b == 0)
    {
        cout << -1;
    }
    else
    {
        cout << a << " " << b;
    }
}