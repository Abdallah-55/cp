#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if ((x - y == 1) || (y - x == 1) || (x - y == 9) || (y - x == 9))
        cout << "YES";
    else
        cout << "NO";
}