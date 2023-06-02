#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n > 1)
    {
        if (n % 10 != 1 && n % 100 != 14 && n % 1000 != 144)
        {
            cout<<"NO\n";
            return 0;
        }
        else n /= 10;
    }
    cout<<"YES\n";
}
