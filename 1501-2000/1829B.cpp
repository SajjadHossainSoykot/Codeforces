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
        int a[n];
        bool flag=false;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==0)flag=true;
        }
        if(flag)
        {
            int max=1, count=1;
            for (int i = 0; i < n-1; i++)
            {
                if(a[i]==a[i+1] && a[i]==0)count++;
                else count=1; //reset count;
                if(count>max)max=count;
            }
            cout<<max<<endl;
        }
        else cout<<0<<endl;
    }
}