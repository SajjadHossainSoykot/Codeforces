#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, k;
        cin >> n >> k;
        long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int count = 1;
        int ans = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] <= k)
                count++;
            else
            {
                ans = max(count, ans);
                count = 1;
            }
        }
        ans = max(count, ans);
        cout << n-ans << endl;
    }
}