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
        int b[n + 1]={0};
        int ans = 0;
        for (int i = 1; i <= n; i++)
            cin >> b[i];
        for (int i = 1; i <= n; i++)
        {
            if (b[i] >= b[i - 1])
                ans++;
            else
                ans += 2;
        }
        cout << ans << endl;
        for (int i = 1; i <= n; i++)
        {
            if (b[i] >= b[i - 1])
                cout << b[i] << " ";
            else
                cout << b[i] << " " << b[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}