#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n], sum[n+1]={0}; 
    sum[0]=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum[i+1]=sum[i]+a[i];
    }
    // for (int i = 0; i < n+1; i++)
    // {
    //     cout<<"Sum["<<i<<"] "<<sum[i]<<endl;
    // }
    int m;
    cin>>m;
    int q[m];
    for (int i = 0; i < m; i++)
    {   
        cin>>q[i];
        int ans = lower_bound(sum,sum+n,q[i])-sum;
        cout<<ans<<endl;
        // for(int j=0; j<n-1; j++)
        // {
        //     if (q[i]<=sum[0])
        //     {
        //         cout<<1<<endl;
        //         break;
        //     }
        //     else if(q[i]>sum[j] && q[i]<=sum[j+1])
        //     {
        //         cout<<j+2<<endl;
        //         break;
        //     }
        // }
    }
    

}