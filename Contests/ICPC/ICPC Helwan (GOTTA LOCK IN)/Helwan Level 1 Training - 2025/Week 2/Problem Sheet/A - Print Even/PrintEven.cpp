#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    while (n <= m)
    {
        if (n % 2 == 0)
            cout << n << " ";
        n++;
    }
}