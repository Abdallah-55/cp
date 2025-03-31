#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, d;
    cin >> n;
    int line[n];
    line[0] = 1;
    for (int i = 2; i <= n; i++)
    {
        cin >> d;
        line[d + 1] = i;
    }
    for (int j : line)
    {
        cout << j << " ";
    }
}