#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int o = 0, z = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                o++;
            else if (s[i] == '0')
                z++;
        }
        int ans = z == o ? z-1 : min(z, o);
        cout << ans << endl;
    }
}