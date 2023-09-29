#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a;
        cin >> n >> k;
        string s = "NO";
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a == k)
                s = "YES";
        }
        cout << s << endl;
    }
}