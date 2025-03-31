#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    int tmp = 1;
    for (int i = 1; i <= y; i++)
    {
        tmp *= 2;
    }
    cout << y + ((x * tmp) / 2);
    return 0;
}
