#include<bits/stdc++.h>
using namespace std;
int main()
{
    char g[2];
    cin>>g;
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {   
        string h;
        cin>>h;
        if(h[0]==g[0] || h[1]==g[1])flag=true;
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n"; 
}