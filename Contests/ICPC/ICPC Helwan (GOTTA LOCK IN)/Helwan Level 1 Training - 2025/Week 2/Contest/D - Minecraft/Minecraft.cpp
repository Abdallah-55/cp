#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, days = 0;
    cin >> n >> x;
    while (n < x)
    {
        n += n / 2;
        days++;
    }
    cout << days;
}
