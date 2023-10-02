#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        long long ans = 0;

        cin >> a >> b >> n;
        ans = b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ans += min(a - 1, x);
        }
        cout << ans << endl;
    }
}