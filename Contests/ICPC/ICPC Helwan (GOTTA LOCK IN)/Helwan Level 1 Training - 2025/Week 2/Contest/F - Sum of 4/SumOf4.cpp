#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long count = 0;
    cin >> n;
    for (int a = -n; a <= n; a++)
    {
        for (int b = -n; b <= n; b++)
        {
            for (int c = -n; c <= n; c++)
            {
                count++;
            }
        }
    }
    cout << count;
}