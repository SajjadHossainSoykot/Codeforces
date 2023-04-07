#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long l[3];
        cin>>l[0]>>l[1]>>l[2];
        sort(l,l+3);
        if(l[2]==l[1]+l[0])cout<<"YES\n";
        else if((l[0]==l[1] && l[2]%2==0) ||(l[2]==l[1] && l[0]%2==0))cout<<"YES\n";
        else cout<<"NO\n";
    }
}