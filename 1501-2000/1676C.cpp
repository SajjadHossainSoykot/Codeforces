#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i, j, k;
        cin >> n >> m;
        string a[n];
        for (i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int s = 25 * m;
        for (i = 0; i < n; i++)
            for (j = i + 1; j < n; j++)
            {
                int p = 0;
                for (k = 0; k < m; k++)
                    p += abs(a[i][k] - a[j][k]);
                s = min(s, p);
            }
        cout << s << endl;
    }
}