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
        char s[n];
        cin>>s;
        char *max;
        max= max_element(s,s+n);
        int ans = *max - 96;
        cout<<ans<<endl;
    }
}