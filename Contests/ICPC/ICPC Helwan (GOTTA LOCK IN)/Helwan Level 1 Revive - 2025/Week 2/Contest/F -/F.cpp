#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long a, b, c;
    bool CanHe = 0;
    cin >> a >> b >> c; // i * a + j * b = c
    for (int i = 0; a * i <= c; i++)
    {
        for (int j = 0; b * j <= c; j++)
        {
            if ((i * a + j * b) == c)
            {
                CanHe = 1;
                break;
            }
        }
    }
    if (CanHe)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}