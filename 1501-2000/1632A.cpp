#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        cout<<(n<=2&&s[0]!=s[1]?"YES\n":"NO\n");
    }
}