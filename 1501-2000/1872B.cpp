#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 1e9;
        cin >> n;
        while (n--)
        {
            int a, b;
            cin >> a >> b;
            ans = min(ans, a + (b - 1) / 2);
        }
        cout << ans << endl;
    }
}