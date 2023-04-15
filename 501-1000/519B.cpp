#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; 
    long a[n], b[n-1], c[n-2];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < n-1; i++)
    {
        cin>>b[i];     
    }
    sort(b, b+n-1);
    long ans1=a[n-1];
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]!=b[i])
        {
            ans1=a[i];
            break;
        }
    }
    for (int i = 0; i < n-2; i++)
    {
        cin>>c[i];     
    }
    sort(c, c+n-2);
    long ans2=b[n-2];
    for (int i = 0; i < n-2; i++)
    {
        if(b[i]!=c[i])
        {
            ans2=b[i];
            break;
        }
    }
    cout<<ans1<<endl;
    cout<<ans2<<endl;
}