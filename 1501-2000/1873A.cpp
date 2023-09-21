#include <bits/stdc++.h>
using namespace std;
int main()
{
    string data[] = {"abc","acb","cba","bac"};
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string ans = "NO";
        for (size_t i = 0; i < 4; i++)
        {
            if (data[i] == s)
                ans = "YES";
        }
        cout << ans << endl;
    }
}