#include <iostream>
using namespace std;

int main()
{
    int n, m, x;
    bool lucky = 1, only = 1;
    cin >> n >> m;
    for (n; n <= m; n++)
    {
        x = n;
        while (x != 0)
        {
            if ((x % 10) == 4 || (x % 10) == 7)
            {
                x /= 10;
                lucky = 1;
            }
            else
            {
                lucky = 0;
                break;
            }
        }
        if (lucky)
        {
            cout << n << " ";
            only = 0;
        }
    }
    if (only)
    {
        cout << -1;
    }
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, m, x, lucky = 1, only = 1;
//     cin >> n >> m;
//     for (n; n <= m; n++)
//     {
//         x = n;
//         while (x >= 10)
//         {
//             if ((x % 10) == 4 || (x % 10) == 7)
//             {
//                 x /= 10;
//                 lucky = 1;
//             }
//             else
//             {
//                 lucky = 0;
//                 break;
//             }
//         }
// /*         if (lucky && (x == 4 || x == 7))
//         {
//             cout << x;
//             lucky = 1;
//         }
//         else
//         {
//             lucky = 0;
//             break;
//         } */
//         if (lucky && (x == 4 || x == 7))
//         {
//             cout << n << " ";
//             only = 0;
//         }
//     }
//     if (only)
//     {
//         cout << -1;
//     }
// }