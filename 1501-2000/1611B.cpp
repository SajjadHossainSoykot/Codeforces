#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = min(min(a, b), (a + b) / 4);
        cout << ans << endl;
    }
}