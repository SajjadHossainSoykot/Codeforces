#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a, o = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        o += a & 1;
    }
    cout << min(o, n - o);
}
