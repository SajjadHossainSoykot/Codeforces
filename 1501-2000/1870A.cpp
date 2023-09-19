#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, x;
    cin >> t;
    while (t--)
    {
        cin>>n>>k>>x;
        if (x < k - 1 || n < k)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<k * (k - 1) / 2 + (x == k ? x - 1 : x) * (n - k)<<endl;
    }
}