#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n, k, odd_cnt = 0;
        cin >> n >> k;
        cin >> s;
        int a[28] = {0};
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        for (int i = 0; i <= 25; i++)
        {
            if (a[i] % 2 == 1)
                odd_cnt++;
        }
        cout << ((odd_cnt - 1 <= k) ? "YES" : "NO") << endl;
    }
}