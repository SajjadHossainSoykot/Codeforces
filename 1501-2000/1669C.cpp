#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool flag=true;
        for (int i = 0; i < n-2; i++)
        {
            if(a[i]%2!=a[i+2]%2)
            {
                flag=false;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        solve(n);
    }
}