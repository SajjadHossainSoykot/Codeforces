#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long r,b,d;
        cin>>r>>b>>d;
        long x = max(r,b);
        long y = min(r,b);
        if((x-1)/y<=d)cout<<"YES\n";
        else cout<<"NO\n";
    }
}