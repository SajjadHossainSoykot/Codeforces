#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, ans;
    cin>>n>>m;
    if(n<m)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(n%2==0)ans=n/2;
    else ans = n/2 +1;
    if(ans%m==0) ans = ans;
    else ans = ans + m - (ans%m);
    cout<<ans<<endl;
}