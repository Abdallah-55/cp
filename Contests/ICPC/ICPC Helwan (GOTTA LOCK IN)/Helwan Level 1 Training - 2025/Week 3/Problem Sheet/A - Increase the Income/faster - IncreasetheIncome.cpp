#include <iostream>
using namespace std;

int main()
{
    freopen("C:/Entertainment/Study/CS/CP/input.txt", "r", stdin);
    freopen("C:/Entertainment/Study/CS/CP/output.txt", "w", stdout);

    int n, k;
    int price;
    cin >> n >> k;

    while (n--)
    {
        cin >> price;
        cout << price + k << " ";
    }
}
