#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, b, d;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int min = abs(a[0] - a[n - 1]);
    b = 1;
    d = n;
    for (int i = 0; i < n - 1; i++)
    {
        c = abs(a[i + 1] - a[i]);
        if (min > c)
        {
            min = c;
            b = i + 1;
            d = i + 2;
        }
    }
    cout << b << " " << d;
}
