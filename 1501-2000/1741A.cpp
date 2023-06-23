#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int ansA = (a[0] == 'M') ? 0 : ((a[a.length() - 1] == 'L') ? a.length() : -a.length());
        int ansB = (b[0] == 'M') ? 0 : ((b[b.length() - 1] == 'L') ? b.length() : -b.length());
        cout << (ansA == ansB ? "=" : (ansA > ansB ? ">" : "<")) << endl;
    }
}