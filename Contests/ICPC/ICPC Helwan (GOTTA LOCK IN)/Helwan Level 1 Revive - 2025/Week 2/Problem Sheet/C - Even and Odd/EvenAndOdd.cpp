#include <iostream>
using namespace std;

int main()
{
    int n, x, max = 0, min = 10e8;
    cin >> n;
    while (n--)
    {
        cin >> x;
        max = (!(x % 2) && (x > max)) ? x : max;
        min = ((x % 2) && (x < min)) ? x : min;
    }
    cout << max << " " << min;
}
