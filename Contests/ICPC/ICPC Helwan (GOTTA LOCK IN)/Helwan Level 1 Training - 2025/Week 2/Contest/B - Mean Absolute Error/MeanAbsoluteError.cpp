#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n, x, y;
    float MAE = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        MAE += abs(x - y) / (float)n;
    }
    cout << MAE;
}
