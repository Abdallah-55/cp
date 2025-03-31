#include <iostream>
using namespace std;

int main()
{
    long long x, z;
    cin >> x;
    while (1)
    {
        cin >> z;
        if (x >= z)
        {
            cout << "Win" << "\n";
        }
        else
        {
            cout << "Lose" << "\n";
            break;
        }
    }
}
