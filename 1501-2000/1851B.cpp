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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        bool f= true;
        for (int i = 0; i < n; i++)
        {   
            if((a[i]%2)!=(b[i]%2))
            {
                f=false;
                break;
            }
        }
        cout<<(f?"YES":"NO")<<endl;
    }
}