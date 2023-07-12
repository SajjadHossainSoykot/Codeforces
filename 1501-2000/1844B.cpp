#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << ' ';
        }
        cout << 1 << ' ';
        for (int i = (n + 1) / 2 * 2 - 1; i > 1; i -= 2)
            cout << i << ' ';
        cout << endl;
    }
}
