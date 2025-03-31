#include <iostream>
using namespace std;

int main()
{
    long long t, n, x;
    char c;
    cin >> t >> n;
    while (t--)
    {
        cin >> c >> x;
        if (c == '+')
            (n += x);
        else if (c == '-')
            (n -= x);
        else if (c == '*')
            (n *= x);
        else if (c == '/')
            (n /= x);
        else
            cout << "not valid";
    }
    cout << n;
}