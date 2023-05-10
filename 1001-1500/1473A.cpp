#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0; i<n; i++)cin>>a[i];
        sort(a,a+n);
        bool flag = false;
        for(int i=1; i<n; i++)
        {
            if(a[i] + a[i-1] <= d)
            {
                flag = true;
                break;
            }
        }
        if(a[n-1] <= d || flag == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
