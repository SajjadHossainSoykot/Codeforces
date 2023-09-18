#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            if (i % 2 == 0)
                s[i] = s[i] == 'a' ? 'b' : 'a';
            else
                s[i] = s[i] == 'z' ? 'y' : 'z';
        cout << s << endl;
    }
}