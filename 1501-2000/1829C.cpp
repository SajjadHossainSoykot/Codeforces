#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int first=0, second=0;
    int n, ans1=1e9, ans2=1e9, ans3=1e9;
    cin>>n;
    for ( int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        string s;
        cin>>s;
        if(s[0]=='1' && s[1]=='1')
        {
            first++; 
            second++;
            ans1 = min(m,ans1);
        }
        else if(s[0]=='1')
        {
            first++;
            ans2 = min(m,ans2);
        }
        else if(s[1]=='1')
        {
            second++;
            ans3 = min(m,ans3);
        }
    }
    int ans = min(ans1,ans2+ans3);
    if(first!=0 && second!=0)cout<<ans<<endl;
    else cout<<-1<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}