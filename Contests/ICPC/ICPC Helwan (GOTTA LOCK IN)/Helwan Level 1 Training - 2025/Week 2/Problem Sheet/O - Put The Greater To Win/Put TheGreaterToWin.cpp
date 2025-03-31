#include <iostream>
using namespace std;

int main()
{
    long long s_a, s_b, a, b, max_a = 0, max_b = 0;
    cin >> s_a >> s_b;
    while (s_a--)
    {
        cin >> a;
        max_a = (a > max_a) ? a : max_a;
    }
    while (s_b--)
    {
        cin >> b;
        max_b = (b > max_b) ? b : max_b;
    }
    if (max_a >= max_b)
    {
        cout << "LAMORO";
    }
    else if (max_a < max_b)
    {
        cout << "Ouda";
    }
    // the optimal method in the game to always play your highest card.
    // No Risk No Fun, baby.
}