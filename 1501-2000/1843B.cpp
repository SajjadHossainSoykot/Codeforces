#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long n, sum = 0, count = 0;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }
        int start = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0 && start == 1)
            {
                count++;
                start = 0;
            }
            else if (a[i] > 0)
                start = 1;
        }
        cout << sum << " " << count << endl;
    }
}