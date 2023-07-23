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
        bool f=true;
        long a[n];
        long diff=LONG_MAX;
        cin>>a[0];
        for (int i = 1; i < n; i++)
        {
            cin>>a[i];
            if(a[i]<a[i-1])f=false;
            if(a[i]-a[i-1]<diff) diff=a[i]-a[i-1];
        }
        cout<<(f?(diff/2)+1:0)<<endl;
    }
}