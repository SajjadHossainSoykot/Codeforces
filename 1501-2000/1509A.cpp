#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {

        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2)
                cout << a[i] << " ";
        }
        for (int i = 0; i < n; i++)
            if (a[i] % 2 == 0)
                cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}
