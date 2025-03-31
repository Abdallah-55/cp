#include <bits/stdc++.h>
using namespace std;

int main()
{
    double N;
    cin >> N;
    int x = N;
    if (N == x)
    {
        cout << "int " << x;
    }
    else
    {
        cout << "float " << x << " " << N - x;
    }
}
