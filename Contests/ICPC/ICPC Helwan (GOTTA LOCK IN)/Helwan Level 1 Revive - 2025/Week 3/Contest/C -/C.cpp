#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, q, x;
    char tmp;
    cin >> n >> q;
    string s;
    cin >> s;
    while (q--)
    {
        cin >> x;
        if (x > n / 2)
        {
            for (long long i = x - 1; i > (n - 1) / 2; i--)
            {
                tmp = s[(n - i) - 1];
                s[(n - i) - 1] = s[i];
                s[i] = tmp;
            }
        }
        else
        {
            for (long long i = x - 1; i <= (n - 1) / 2; i++)
            {
                tmp = s[i];
                s[i] = s[(n - i) - 1];
                s[(n - i) - 1] = tmp;
            }
        }
    }
    cout << s;
}
