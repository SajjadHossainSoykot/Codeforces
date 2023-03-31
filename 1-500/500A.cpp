#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin>>n>>t;
    int a[n-1];
    bool flag=false;
    for (int i = 0; i < n-1; i++)
    {
        cin>>a[i];
        if(a[i]+i+1==t)flag=true;
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
}