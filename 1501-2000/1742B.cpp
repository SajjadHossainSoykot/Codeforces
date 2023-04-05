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
        for (int i = 0; i <n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        bool flag = true;
        for (int i = 0; i <n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                flag = false;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";     
    }

}