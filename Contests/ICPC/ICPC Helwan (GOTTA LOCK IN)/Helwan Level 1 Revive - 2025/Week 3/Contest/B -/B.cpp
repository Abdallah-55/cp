#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s, now = "", max = "";
    cin >> s;
    for (auto &&i : s)
    {
        if (i == '_')
        {
            if (size(now) > size(max))
            {
                max = now;
            }
            else if (size(now) == size(max))
            {
                if (now >= max)
                {
                    max = now;
                }
            }

            now = "";
            continue;
        }
        now.append(1, i);
    }
    if (size(now) > size(max))
    {
        max = now;
    }
    else if (size(now) == size(max))
    {
        if (now >= max)
        {
            max = now;
        }
    }
    cout << max;
}
