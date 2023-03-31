#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a, match=0;
        cin>>a;
        if(360%(180-a)==0)match++;
        if(match==0)cout<<"NO\n";
        else cout<<"YES\n";
    }
}