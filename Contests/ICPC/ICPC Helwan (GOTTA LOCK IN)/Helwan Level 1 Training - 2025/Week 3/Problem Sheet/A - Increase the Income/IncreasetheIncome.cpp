#include <iostream>
using namespace std;

int main()
{
    freopen("C:/Entertainment/Study/CS/CP/input.txt", "r", stdin);
    freopen("C:/Entertainment/Study/CS/CP/output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] + k << " ";
    }
}