#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n>>s;
        cout<<string(n,s[n-1])<<endl;
    }
}