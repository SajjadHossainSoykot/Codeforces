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
        int count[101] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count[a[i]]++;
        }
        bool flag = true;
        for (int i = 0; i < 101 - 1; i++)
        {
            if (count[i + 1] > count[i])
                flag = false;
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] > 1)
                flag = false;
        }
        if (n = 1 && a[0] != 0)
            flag = false;
        cout << (flag ? "YES\n" : "NO\n");
    }
}