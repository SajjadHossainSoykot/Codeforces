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
        long a[n];
        long min=LONG_MAX, sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]<min)min=a[i];
            sum+=a[i];

        }
        cout<<sum-n*min<<endl;        
    }
}