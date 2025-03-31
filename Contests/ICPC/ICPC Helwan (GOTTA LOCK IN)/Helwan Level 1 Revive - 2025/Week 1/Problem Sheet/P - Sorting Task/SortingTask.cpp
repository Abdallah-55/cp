#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B, C;
    cin >> A >> B >> C;
    if (A <= B && A <= C)
    {
        cout << A << " ";
        if (B <= C)
        {
            cout << B << " ";
            cout << C << "\n";
        }
        else
        {
            cout << C << " ";
            cout << B << "\n";
        }
    }
    else if (B < A && B <= C)
    {
        cout << B << " ";
        if (A <= C)
        {
            cout << A << " ";
            cout << C << "\n";
        }
        else
        {
            cout << C << " ";
            cout << A << "\n";
        }
    }
    else
    {
        cout << C << " ";
        if (A <= B)
        {
            cout << A << " ";
            cout << B << "\n";
        }
        else
        {
            cout << B << " ";
            cout << A << "\n";
        }
    }

    cout << A << " " << B << " " << C;
}