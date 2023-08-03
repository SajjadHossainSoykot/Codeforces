#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int a, b;
        cin >> a >> b;
        cout << 2 << "\n"
             << a - 1 << ' ' << 1 << "\n"
             << a << ' ' << b << "\n";
    }
}