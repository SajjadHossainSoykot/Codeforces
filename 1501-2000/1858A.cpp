#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        string s1="First", s2="Second";
        if(c%2==0)cout<<(a>b?s1:s2)<<endl;
        else cout<<(a<b?s2:s1)<<endl;
    }
}