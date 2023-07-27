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
        int arr[n + 1] = {};
        for (int i = 1; i <= n; ++i)
        {
            int a;
            cin >> a;
            if (arr[a])
                arr[a] = -1;
            else
                arr[a] = i;
        }
        int ans = -1;
        for (int i = 1; i <= n; ++i)
            if (arr[i] > 0)
            {
                ans = arr[i];
                break;
            }
        cout << ans << endl;
    }
}
