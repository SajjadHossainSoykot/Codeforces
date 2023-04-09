#include<bits/stdc++.h>
typedef long long int ll; 
using namespace std;
ll fact(ll c)
{
    ll ans=1;
    while (c>0)
    {
        ans *= c;
        c--;
    }
    return ans;
}
int main()
{
    ll a, b, c, ans=1;
    cin>>a>>b;
    c=min(a,b);
    cout<<fact(c)<<endl;
}