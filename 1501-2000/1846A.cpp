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
        int a[n], b[n], count=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i]>>b[i];
            if(a[i]>b[i])count++;
        }
        cout<<count<<endl;
    }
}