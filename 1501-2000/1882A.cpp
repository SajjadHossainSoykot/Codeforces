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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            count++;
            if (count == x)
            {
                count++;
            }
        }
        cout << count << "\n";
    }
}
