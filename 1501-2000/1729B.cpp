#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        string t = "";
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
                t = char(s[--i] + 10 * s[--i] + 80) + t;
            else
                t = char(s[i] + 48) + t;
        }
        cout << t << endl;
    }
}