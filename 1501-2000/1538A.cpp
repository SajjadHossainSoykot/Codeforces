#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                a = i;
            if (x == n)
                b = i;
        }
        if (a > b)
            swap(a, b);
        cout << min(b + 1, min(n - a, a + 1 + n - b)) << endl;
    }
}