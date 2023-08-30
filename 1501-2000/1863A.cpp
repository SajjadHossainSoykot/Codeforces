#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, q;
        string s;
        cin >> n >> a >> q >> s;
        int x = a, y = a, z = 0;
        for (int i = 0; i < q; i++)
        {
            if (s[i] == '+')
                x++, y += (z == 0), z = max(z - 1, 0);
            else
                z++;
        }
        if (y >= n)
            puts("YES");
        else if (x >= n)
            puts("MAYBE");
        else
            puts("NO");
    }
}