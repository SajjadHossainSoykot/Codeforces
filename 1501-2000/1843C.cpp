#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,ans=0;
        cin>>n;
        x = n;
        while (x>0)
        {
            ans += x;
            x/=2;
        }
        cout<<ans<<endl;
    }
}