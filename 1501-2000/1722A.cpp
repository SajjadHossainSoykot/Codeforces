#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s,a="Timur";
        cin>>s;
        sort(s.begin(),s.end());
        sort(a.begin(),a.end());
        if(s==a)cout<<"YES\n";
        else cout<<"NO\n";
    }
}