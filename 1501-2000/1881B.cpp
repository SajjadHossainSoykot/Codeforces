#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin>>a>>b>>c;
        d = __gcd(a, b);
        d = __gcd(d, c);
        long long ans = (a / d) + (b / d) + (c / d) - 3;
        cout << ((ans <= 3) ? "YES" : "NO") << endl;
    }
}