#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x2 == x1 && y2 == y1)
    {
        cout << "Arrived";
    }
    else if (x2 == x1)
    {
        if (y2 > y1)
        {
            cout << "North";
        }
        else
        {
            cout << "South";
        }
    }
    else if (y2 == y1)
    {
        if (x2 > x1)
        {
            cout << "East";
        }
        else
        {
            cout << "West";
        }
    }
    else if (x2 > x1)
    {
        if (y2 > y1)
        {
            cout << "Northeast";
        }
        else
        {
            cout << "Southeast";
        }
    }
    else if (x2 < x1)
    {
        if (y2 > y1)
        {
            cout << "Northwest";
        }
        else
        {
            cout << "Southwest";
        }
    }
}