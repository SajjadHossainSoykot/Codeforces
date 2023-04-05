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
        int hash[51]={0};
        int a[2*n], p[n],k=0;;
        for (int i = 0; i < 2*n ; i++)
        {
            cin>>a[i];
            if(hash[a[i]]==0)
            {
                hash[a[i]]=a[i];
                p[k++]=a[i];
            }
        }
        for (int i = 0; i <n; i++)
        {
            cout<<p[i]<<" ";
        }
        cout<<endl;
        
    }
}