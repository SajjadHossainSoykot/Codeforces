#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    a[0] = a[2];
    a[n + 1] = a[n - 1];
    for (int i = 1; i <=n; i++)
    {
        cout << min(abs(a[i - 1] - a[i]), abs(a[i + 1] - a[i])) << " " << max(a[i] - a[1], a[n] - a[i]) << "\n";
    }
}