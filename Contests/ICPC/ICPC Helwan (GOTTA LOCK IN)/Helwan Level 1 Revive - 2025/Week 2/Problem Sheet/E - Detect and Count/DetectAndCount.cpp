#include <iostream>
using namespace std;

int main()
{
    int n, x, even = 0, odd = 0, positive = 0, negative = 0;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x % 2)
        {
            odd++;
            if (x > 0)
                positive++;
            else if (x < 0)
                negative++;
        }
        else
        {
            even++;
            if (x > 0)
                positive++;
            else if (x < 0)
                negative++;
        }
    }
    cout << "Even: " << even << "\n"
         << "Odd: " << odd << "\n"
         << "Positive: " << positive << "\n"
         << "Negative: " << negative << "\n";
}
