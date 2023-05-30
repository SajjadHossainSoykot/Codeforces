#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, n, m;
        cin>>x>>n>>m;
        int ans1=x, ans2=x;
        int a=n, b=m;
        bool flag = false;
        while (n-- && ans1>0)
        {
            ans1 = (ans1/2) + 10;
            if(ans1<=0)
            {
                flag = true;
                break;
            }
        }
        while (m-- && ans1>0)
        {
            ans1 = ans1 - 10;
            if(ans1<=0)
            {
                flag = true;
                break;
            }
        }
        while (b-- && ans2>0)
        {
            ans2 = ans2 - 10;
            if(ans2<=0)
            {
                flag = true;
                break;
            }
        }
        while (a-- && ans2>0)
        {
            ans2 = (ans2/2) + 10;
            if(ans2<=0)
            {
                flag = true;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}