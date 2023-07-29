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
        int a[n];
        float count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == i + 1)
                count++;
        }
        int ans = (count == 0 ? 0 : ceil(count / 2));
        cout << ans << endl;
    }
}