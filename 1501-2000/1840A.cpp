#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s, a = "";
        cin >> n >> s;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    a = a + s[i];
                    i = j;
                    break;
                }
            }
        }
        cout << a << endl;
    }
}