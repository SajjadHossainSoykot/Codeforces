#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        string x = "vika";
        int cur = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (s[j][i] == x[cur])
                {
                    cur++;
                    break;
                }
            }
        }
        cout<<(cur>=4?"YES":"NO")<<endl;
    }
}