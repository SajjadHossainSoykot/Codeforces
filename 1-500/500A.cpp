#include <iostream>
using namespace std;
int n, t, a, b;
main()
{
    cin >> n >> t >> a;
    t--;
    while (t > 0)
    {
        t = t - a;
        b = a;
        while (b--)
            cin >> a;
    }
    cout << (t == 0 ? "YES" : "NO");
}