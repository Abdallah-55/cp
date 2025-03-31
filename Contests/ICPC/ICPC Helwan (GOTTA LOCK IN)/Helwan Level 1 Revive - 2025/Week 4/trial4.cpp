#include <iostream>
#include <string>
#include <algorithm>
#include <string.h>

using namespace std;
constexpr auto nf = string::npos;

// if x != y
// if count
// No; return;
// else
// if x + 1 == y
//  swap(x+1,y)
// count++
// else
// No; return;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.length() / 2; i++)
    {

        if (s[i] != s[s.length() - 1 - i])
        {
            // cout << s[i] << " " << s[s.length() - 1 - i] << "\n" << count << "\n";
            if (count)
            {
                cout << "NO";
                return 0;
            }
            else
            {
                if (s[i + 1] == s[i])
                {
                    swap(s[i + 1], s[s.length() - 1 - i]);
                    count++;
                }
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES";
}
// int num, flag, frq[58];
// string s;
// cin >> num;
// while (1)
// {
//     num++;
//     flag = 1;
//     fill(frq, frq + 58, 0);
//     s = to_string(num);
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (frq[s[i]])
//         {
//             flag = 0;
//             break;
//         }
//         frq[s[i]]++;
//     }
//     if (flag)
//     {
//         cout << num;
//         return 0;
//     }
// }