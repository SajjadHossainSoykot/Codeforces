#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, l[26] = {};
        bool f = true;
        cin >> n;
        m = n;
        while (m--)
        {
            string s;
            cin >> s;
            for (char x : s)
                l[x - 97]++;
        }
        for (int x : l)
        {
            if (x % n)
                f = false;
        }
        cout<<(f?"YES":"NO")<<endl;
    }
}