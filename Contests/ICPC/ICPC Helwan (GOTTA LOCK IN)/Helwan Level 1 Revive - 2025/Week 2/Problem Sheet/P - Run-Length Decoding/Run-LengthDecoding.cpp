#include <iostream>
using namespace std;

int main()
{
    int n, x;
    char c;
    cin >> n;
    while (n--)
    {
        cin >> x >> c;
        while (x--)
        {
            cout << c;
        }
    }
}