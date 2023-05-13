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
        int a[n];
        for(int i=0 ; i<n ; i++)cin>>a[i];
        for (int i = 0; i < n; i++)
        {   
            int b;
            cin>>b;
            string s;
            cin>>s;
            int U=0, D=0;
            for(int j=0 ; j<b ; j++)
            {
                if(s[j]=='U') U++;
                else D++;
            }
            a[i] = a[i] + D - U;
            if(a[i]>9) a[i] = (a[i]%10);
            else if (a[i]<0) a[i] = a[i] + 10;
        }
        for(int i=0 ; i<n ; i++)cout<<a[i]<<" ";
        cout<<endl;
    }
}