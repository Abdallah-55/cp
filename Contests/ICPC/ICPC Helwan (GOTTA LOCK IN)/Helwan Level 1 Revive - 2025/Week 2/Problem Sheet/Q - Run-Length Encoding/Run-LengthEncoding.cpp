#include <iostream>
using namespace std;

int main()
{
    int n, x = 0;
    char c_1, c_2;
    cin >> n;
    if (n == 1)
    {
        cin >> c_1;
        x++;
        cout << x << c_1;
    }
    else
    {
        cin >> c_1;
        x++;
        while ((n--) - 1)
        {
            cin >> c_2;
            if (c_2 != c_1)
            {
                cout << x << c_1;
                x = 0;
            }
            c_1 = c_2;
            x++;
        }
        cout << x << c_2;
    }
    /*
    cin >> c_1;
    while ((n--) - 1)
    {
        cin >> c_2;

        x++;
        if (condition)
        {

        }

        if (x)
        {

        }

        while (x--)
        {
            cout << c;
        }
        c_1 = c_2;
    }
    */
}