#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l = 0, r = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
        {
            l = i;
            break;
        }
    for (int i = 1; i < n; i++)
        if (a[i - 1] > a[i])
        {
            r = i;
        }
    reverse(a + l, a + r + 1);
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            return cout << "no\n", 0;
    cout << "yes\n"
         << l+1 << ' ' << r+1 << '\n';

    return 0;
}