#include <iostream>
using namespace std;
main()
{
    int t, a, c=0, x=0, m=0, r = -1;
    cin >> t;
    while (t--)
    {
        cin >> a;
        c += a;
        x += 1 - a * 2;
        r = max(r, x - m);
        m = min(x, m);
    }
    cout << r + c;
}