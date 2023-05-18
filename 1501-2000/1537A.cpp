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
        long sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin>>a;
            sum += a;
        }
        long ans = (sum>=n)?sum-n:1;
        cout<<ans<<endl;
    }
}