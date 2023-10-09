#include <bits/stdc++.h>
using namespace std;
int t, n, ans[40001];
pair<int, int> a[40001];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a + 1, a + n + 1);
        reverse(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
        {
            ans[a[i].second] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << endl;
    }
}