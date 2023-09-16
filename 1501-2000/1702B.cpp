#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
        string s;
        set<char> S;
        cin >> s;
        int ans = 1;
        for (auto c : s)
        {
            S.insert(c);
            if (S.size() > 3)
                S.clear(), S.insert(c), ans++;
        }
        cout << ans << '\n';
    }
}