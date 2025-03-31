#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m;
    cin >> n >> m;
    string food[n];
    string bev[m];
    for (long long i = 0; i < n; i++)
    {
        cin >> food[i];
    }
    for (long long j = 0; j < m; j++)
    {
        cin >> bev[j];
    }
    for (auto &&a : food)
    {
        for (auto &&b : bev)
        {
            cout << a << " " << b << "\n";
        }
    }
}