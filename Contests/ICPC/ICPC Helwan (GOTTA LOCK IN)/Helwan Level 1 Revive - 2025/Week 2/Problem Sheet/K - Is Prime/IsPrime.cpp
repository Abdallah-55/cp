#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isprime = 1;
    cin >> n;
    if (n == 1)
    {
        isprime = 0;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }
    if (isprime)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}