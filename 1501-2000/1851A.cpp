#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        int h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
            h[i] = abs(H - h[i]);
        }
        int s[m];
        for (int i = 0; i < m; i++)
        {
            s[i] = (i + 1) * k;
        } 
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m-1; j++)
            {
                if(h[i]==s[j])
                {
                    count++;
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
}