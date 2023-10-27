#include <iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, k;
        cin >> x >> k;

        int y = x;
        while (sum(y) % k != 0)
        {
            y++;
        }
        cout << y << endl;
    }
}