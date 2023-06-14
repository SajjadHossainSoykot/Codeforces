#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        long ax = x-a>0?x-a:0;
        long by = y-b>0?y-b:0;
        if((ax+by<=c))cout<<"YES\n";
        else cout<<"NO\n";
    }
}