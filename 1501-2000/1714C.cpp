#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s;
        cin>>s;
        int i=9;
        while(i&&i<s)s-=i--;
        cout<<s;
        while(i<9)cout<<++i;
        cout<<'\n';
    }
}