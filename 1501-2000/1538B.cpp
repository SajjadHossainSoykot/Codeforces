#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n], sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            sum +=a[i];
        }
        if(sum%n!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        int avg = sum/n;
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            if(avg<a[i])ans++;
        }
        cout<<ans<<endl;
    }
}