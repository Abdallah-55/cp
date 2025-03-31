#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n, x, sum = 0;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x > 10)
        {
            sum += (x - 10);
        }
    }
    cout << sum;
}