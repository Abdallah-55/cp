#include <bits/stdc++.h>
using namespace std;

int main()
{
    double N;
    cin >> N;
    if (N == (int)N)
    {
        cout << "int " << (int)N;
    }
    else
    {
        cout << "float " << (int)N << " " << N - (int)N;
    }
}
