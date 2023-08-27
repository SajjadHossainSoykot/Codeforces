#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        if ((n - 1) * n / 2 + x <= y)
        {

            int num = n - 1;
            cout << x << " ";
            x = y - (n - 1) * n / 2 + (n - 1);
            for (int i = 2; i <= n; i++)
            {
                cout << x << " ";
                num--;
                x += num;
            }
            cout << endl;
        }

        else cout << -1 << endl;
    }
}