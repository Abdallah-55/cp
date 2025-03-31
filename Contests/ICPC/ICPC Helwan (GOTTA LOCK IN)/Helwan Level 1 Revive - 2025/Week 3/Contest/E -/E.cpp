#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<int> arr;
    int x;

    while (1)
    {
        cin >> x;
        arr.push_back(x);
        if (x == 0)
            break;
    }

    reverse(arr.begin(), arr.end());

    for (int i : arr)
    {
        cout << i << " ";
    }
}
