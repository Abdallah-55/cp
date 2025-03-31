#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, n, count = 0, x = 0, y = 0, z = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;

        while (2 * x * x <= n)
        {
            while (3 * y * y * y <= n)
            {
                while (4 * z * z * z * z <= n)
                {
                    if ((2 * x * x + 3 * y * y * y + 4 * z * z * z * z) <= n)
                    {
                        count++;
                        z++;
                    }
                    else
                    {
                        z++;
                    }
                }
                z = 0;
                y++;
            }
            y = 0;
            x++;
        }
        x = 0;

        cout << count << "\n";
        count = 0;
    }
}

/*
// Not Completed:
int main()
{
    int t, n, count = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int w = 0; w <= n; i++)
        {
            for (int x = 0; 2 * x * x <= (n - w); x++)
            {

            }

        }

    }

} */

/*
//VERSION 1:

#include <iostream>
using namespace std;

int main()
{
    int t, n, count = 0, w = 0, x = 0, y = 0, z = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (w <= n)
        {
            while (2 * x * x <= (n - w))
            {
                while (3 * y * y * y <= (n - (w + 2 * x * x)))
                {
                    while (4 * z * z * z * z <= (n - (w + 2 * x * x + 3 * y * y * y)))
                    {
                        if ((w + 2 * x * x + 3 * y * y * y + 4 * z * z * z * z) == n)
                        {
                            count++;
                            z++;
                            break;
                        }
                        else
                        {
                            z++;
                        }
                    }
                    z = 0;
                    y++;
                }
                y = 0;
                x++;
            }
            x = 0;
            w++;
        }
        cout << count << "\n";
        w = 0;
        count = 0;
    }
} */

/*
//VERSION 2:

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t, n, count = 0, w = 0, x = 0, y = 0, z = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (w <= n)
        {
            while (2 * x * x <= (n - w))
            {
                while (3 * y * y * y <= (n - (w + 2 * x * x)))
                {
                    z = sqrt(sqrt((n - (w + 2 * x * x + 3 * y * y * y)) / 4));
                    if ((w + 2 * x * x + 3 * y * y * y + 4 * z * z * z * z) == n)
                    {
                        count++;
                        y++;
                    }
                    else
                    {
                        y++;
                    }
                }
                y = 0;
                x++;
            }
            x = 0;
            w++;
        }
        cout << count << "\n";
        w = 0;
        count = 0;
    }
} */