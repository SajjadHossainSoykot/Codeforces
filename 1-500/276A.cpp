#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, M = INT_MIN;
    cin >> a >> b;
    while (a--)
    {
        cin >> c >> d;
        M = max(M, (d > b) ? (c + b - d) : c);
    }
    cout << M;
}
