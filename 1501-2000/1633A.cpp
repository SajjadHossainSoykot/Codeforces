#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, y,ans;
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
            continue;
        }
        x = (n/7)*7;
        y = (n/7 + 1)*7;

        if(x%10+n-x <10) ans = x;
        else ans = y;
        cout<<ans<<endl;

    }
}