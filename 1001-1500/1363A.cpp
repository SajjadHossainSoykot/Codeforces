#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, n;
        cin>>n>>x;
        int a[n];
        int e=0, o=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)e++;
            else o++;
        }
        int m = min(e,x-1);
        int r = x-m;
        if(r%2==0)r++;
        if(o>=r && r<=x)cout<<"Yes\n";
        else cout<<"No\n";
    }
}