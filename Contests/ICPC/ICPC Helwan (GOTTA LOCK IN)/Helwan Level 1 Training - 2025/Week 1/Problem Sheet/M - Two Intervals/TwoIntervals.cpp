#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (l1 > r2 || l2 > r1)
    {
        cout << -1;
    }
    else
    {
        if (l1 >= l2)
        {
            cout << l1;
        }
        else if (l1 < l2)
        {
            cout << l2;
        }
        if (r1 <= r2)
        {
            cout << " " << r1;
        }
        else if (r1 > r2)
        {
            cout << " " << r2;
        }
    }
}