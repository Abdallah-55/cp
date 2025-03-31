#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool a, b, c;
    cin >> a >> b >> c;
    if (a != b && a != c)
    {
        cout << "Ouda";
    }
    else if (b != a && b != c)
    {
        cout << "Gom3a";
    }
    else if (c != a && c != b)
    {
        cout << "Farid";
    }
    else
        cout << "Tie";
}