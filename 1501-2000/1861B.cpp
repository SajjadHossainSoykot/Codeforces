#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        bool f = false;
        for (int i = 0; i < a.length() - 1; i++)
        {
            if (a[i] == '0' && a[i + 1] == '1' && b[i] == '0' && b[i + 1] == '1')
            {
                f = 1;
                break;
            }
        }
        cout << (f ? "YES" : "NO") << endl;
    }
}