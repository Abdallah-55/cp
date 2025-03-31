#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    bool prime = 1;
    cin >> n;
    while (n--)
    {
        prime = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            cout << n;
            break;
        }
    }
}