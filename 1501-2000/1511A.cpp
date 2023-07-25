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
        int u = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a != 2)
            {
                u++;
            }
        }
        cout << u << endl;
    }
}