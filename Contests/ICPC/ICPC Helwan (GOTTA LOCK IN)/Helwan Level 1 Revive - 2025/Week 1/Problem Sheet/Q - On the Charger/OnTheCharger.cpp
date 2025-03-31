#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S, T, X;
    cin >> S >> T >> X;

    if (T < S && !(X >= T && X < S) || T > S && X >= S && X < T)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}