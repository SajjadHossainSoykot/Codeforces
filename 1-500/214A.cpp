#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    for (int a = 0; a * a <= n; a++)
    {
        int b = n - a * a;
        if (m == b * b + a)count++;
    }
    cout << count <<endl;
}