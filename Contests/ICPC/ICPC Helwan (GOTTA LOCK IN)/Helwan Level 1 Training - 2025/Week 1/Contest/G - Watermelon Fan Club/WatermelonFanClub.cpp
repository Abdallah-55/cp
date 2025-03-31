#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, d, w;
    cin >> n >> d >> w;
    // if (w >= n && !((w / n) % d)) // my mistake
    if (w >= n * d && !(w % d))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}