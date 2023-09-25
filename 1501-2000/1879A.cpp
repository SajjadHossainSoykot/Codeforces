#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s, e;
        int x, y;
        cin >> x >> y;
        int ans = 0;
        while (--n)
        {
            cin >> s >> e;
            if (s >= x && e >= y)
                ans = -1;
        }
        if (!ans)
            cout << x << endl;
        else
            cout << ans << endl;
    }
}