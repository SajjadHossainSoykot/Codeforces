#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int i = 2;
        while (n % i != 0)
        {
            i++;
        }
        cout << n + i + (k - 1) * 2 << endl;
    }
}