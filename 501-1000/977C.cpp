#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, n, k;
    cin >> n >> k;
    int a[n + 1];
    a[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n + 1);
    cout << (a[k] != a[k + 1] ? a[k] : -1);
}