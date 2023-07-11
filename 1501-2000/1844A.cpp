#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(a!=1 && b!=1)cout<<1<<endl;
        else cout<<(a==1?b+1:a+1)<<endl;
    }
}