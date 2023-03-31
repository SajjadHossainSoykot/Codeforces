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
        int a[n], sum=0, e=0, o=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)e++;
            else o++;
            sum+=a[i];
        }
        if(sum%2!=0)cout<<"YES\n";
        else 
        {   
            if(o!=0 && e!=0)cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    
}