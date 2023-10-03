#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d[200005], ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            d[i] = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            ans = max(ans, d[x]);
            d[x] = i;
        }
        cout << ans << '\n';
    }
}
