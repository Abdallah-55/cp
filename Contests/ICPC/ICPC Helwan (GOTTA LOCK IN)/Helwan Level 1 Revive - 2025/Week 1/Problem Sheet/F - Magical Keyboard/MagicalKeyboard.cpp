#include <bits/stdc++.h>
using namespace std;

int main()
{
    char C;
    cin >> C;
    if (C >= 65 && C <= 90)
    {
        C += 32;
        cout << C;
    }
    else if (C >= 97 && C <= 122)
    {
        C -= 32;
        cout << C;
    }
    else
        cout << "not valid";
}