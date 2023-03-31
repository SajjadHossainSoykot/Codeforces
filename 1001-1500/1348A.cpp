#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long sum1=0, sum2=0, ans;
        int n, k=0, a[40];
        cin>>n;
        for (int i = 1; i <=n; i++)
        {
            a[k++]=pow(2,i);
        }
        int d=n/2;
        sum1=a[n-1];
        for(int i=0; i<=d-2; i++){
            sum1+=a[i];
        }
        for(int i=d-1; i<n-1; i++){
            sum2+=a[i];
        }
        ans = abs(sum1 - sum2);
        cout<<ans<<endl;
    }
} 
