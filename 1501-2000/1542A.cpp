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
        int odd=0;
        int a[2*n];
        for (int i = 0; i < 2*n; i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)odd++;
        }
        if(odd==n)cout<<"YES\n";
        else cout<<"NO\n";
    }
}