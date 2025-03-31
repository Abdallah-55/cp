#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    int count = 0;
    cin >> n;
    for (long long j = 1; j <= n; j++)
    {
        string s = to_string(j);
        int digits = s.size();

        if (digits % 2 == 0)
        {
            string first = s.substr(0, digits / 2);
            string second = s.substr(digits / 2);
            if (first == second)
            {
                count++;
            }
        }
    }
    cout << count;
}

/* int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, x, tmp, digits = 0, first = 0, second = 0, count = 0;
    cin >> n;
    for (long long j = 1; j <= n; j++)
    {
        x = j;
        tmp = j;
        while (x)
        {
            x /= 10;
            digits++;
        }
        if (digits % 2 == 0)
        {
            for (int i = 1; i <= digits / 2; i++)
            {
                first += ((tmp % 10) * pow(10, (i - 1)));
                tmp /= 10;
            }
            second = tmp;
            if (first == second)
            {
                count++;
            }
        }

        first = 0, second = 0, digits = 0;
    }
    cout << count;
} */