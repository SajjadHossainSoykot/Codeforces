#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i > 0)
                b[i - 1] = (abs(a[i] - a[i - 1]));
        }
        sort(b, b + n - 1);
        int sum = 0;
        for (int i = 0; i < n - k; i++)
            sum += b[i];
        cout << sum << endl;
    }
}