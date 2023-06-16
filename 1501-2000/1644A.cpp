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
        int r = 0, g = 0, b = 0;
        bool flag = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'r')
                r++;
            else if (s[i] == 'g')
                g++;
            else if (s[i] == 'b')
                b++;
            else if (s[i] == 'R' && r == 0)
            {
                flag = false;
                break;
            }
            else if (s[i] == 'G' && g == 0)
            {
                flag = false;
                break;
            }
            else if (s[i] == 'B' && b == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}