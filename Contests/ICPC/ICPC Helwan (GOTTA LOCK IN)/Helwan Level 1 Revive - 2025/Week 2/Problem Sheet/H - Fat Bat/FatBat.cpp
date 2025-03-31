#include <iostream>
using namespace std;

int main()
{
    long long r, x, d, n;
    cin >> r >> d >> x >> n;
    for (int i = 2; i <= n; i++)
    {
        x = r * x - d;
    }
    cout << x;
}