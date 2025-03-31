#include <iostream>
#include <string>
using namespace std;
constexpr auto nf = string::npos;

int main()
{
    // int x;
    // cin >> x;
    // int arr[x];
    // fill(arr, arr + x, 3);
    // cout << arr[2];

    string x = "0123454", y;
    // y = "world";
    // x[6] = 's';
    x[10] = 'w';
    x[11] = 0;
    // still only prints "hello"
    // x.length(); x.size();
    getline(cin, y);
    // y.assign(x);
    // cout << x.at(0) + y;
    // x.substr(first index, number of characters)
    // x.swap(y);
    // x.erase(2, -\2);
    cout << x.replace(3, 0, "yeah") << "_\n"
         << x.substr(2) << "_\n"
         << x.find("452") << "_\n"
         << nf << "_\n"
         << x[10] + y;
}