#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int b, c, h;
        cin >> b >> c >> h;
        cout<<(b<=c+h?2*b-1:(c+h)*2+1)<<endl;
    }
}