#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>

using namespace std;
constexpr auto nf = string::npos;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, flag = 1, x;
    cin >> n >> m;
    // cout << n << m;
    // int arr[n];
    // int day[m];
    long long f[(int)1000000] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        f[x]++;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << "\t";
    //     cout << freqarr[arr[i]] << "\n";
    // }
    for (int j = 0; j < m; j++)
    {
        cin >> x;
        f[x]--;
        if (f[x] < 0)
            flag = 0;
    }
    if (flag)
        cout << "Yes";
    else
        cout << "No";
}