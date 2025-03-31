#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    char S;
    cin >> A >> S >> B;
    switch (S)
    {
    case '=':
        cout << (string)((A == B) ? "Right" : "Wrong");
        break;
    case '>':
        cout << (string)((A > B) ? "Right" : "Wrong");
        break;
    case '<':
        cout << (string)((A < B) ? "Right" : "Wrong");
        break;
    default:
        cout << "not valid";
        break;
    }
}