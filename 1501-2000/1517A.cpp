#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long k = n / 2050, s = 0;
        while (k > 0)
        {
            s += k % 10;
            k /= 10;
        }
        if (n % 2050)
            cout << -1 << endl;
        else
            cout << s << endl;
    }
}