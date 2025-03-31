#include <iostream>
using namespace std;

int main()
{
    long long n, x, ai, ai_1, ground = 0;
    bool survive = 1;
    cin >> n >> x;
    cin >> ai;
    while ((n--) - 1)
    {
        ai_1 = ai;
        cin >> ai;
        if (ai_1 - ai > x)
        {
            survive = 0;
        }
    }
    if (ai - ground > x)
    {
        survive = 0;
    }
    if (survive)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}