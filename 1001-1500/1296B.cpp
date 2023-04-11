#include<bits/stdc++.h>
using namespace std;
void solve(long s)
{
    long ans = 0, x = s, r;
    while (s>9)
    {
        //x = round(x*1.0/10);
        x = (s/10) *10;
        ans += x;
        r = s-x;
        s = s/10 + r;
        
    }
    cout<<ans+s<<endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long s;
        cin>>s;
        solve(s);
    }
}