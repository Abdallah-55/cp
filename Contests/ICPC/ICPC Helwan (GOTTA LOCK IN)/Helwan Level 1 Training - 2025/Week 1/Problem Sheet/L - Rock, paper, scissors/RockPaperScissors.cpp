#include <bits/stdc++.h>
using namespace std;

int main()
{
    char p1, p2;
    cin >> p1 >> p2;
    if (p1 < p2)
    {
        if (p1 == 'P' && p2 == 'S')
        {
            cout << "p2";
        }
        else
        {
            cout << "p1";
        }
    }
    else if (p1 > p2)
    {
        if (p1 == 'S' && p2 == 'P')
        {
            cout << "p1";
        }
        else
        {
            cout << "p2";
        }
    }
    else if (p1 == p2)
    {
        cout << "draw";
    }
    else
    {
        cout << "not valid";
    }
}