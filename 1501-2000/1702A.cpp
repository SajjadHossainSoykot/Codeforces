#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long m, x, ans, i=0;
        cin>>m;
        x = m;
        while (x>0)
        {
            x/=10;
            i++;
        }
        ans = m-pow(10,i-1);
        cout<<ans<<endl;
    }
}