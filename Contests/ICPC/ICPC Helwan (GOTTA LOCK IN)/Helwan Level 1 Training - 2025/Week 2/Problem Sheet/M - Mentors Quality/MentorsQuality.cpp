#include <iostream>
using namespace std;

int main()
{
    long long ID, tmp, palindrome = 0, sum = 0;
    cin >> ID;
    tmp = ID;
    while (tmp)
    {
        sum += tmp % 10;
        palindrome *= 10;
        palindrome += tmp % 10;
        tmp /= 10;
    }
    if (ID == palindrome && !(ID % sum))
    {
        cout << "Best mentor.";
    }
    else if (ID == palindrome ^ !(ID % sum))
    {
        cout << "He's good.";
    }
    else if (!(ID == palindrome && !(ID % sum)))
    {
        cout << "He'll be fired.";
    }
}