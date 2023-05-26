#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            int x = min(a[i],a[i+1]);
            int y = max(a[i], a[i+1]);
            while (x*2<y)
            {
                count++;
                x = x*2;
            }
        }
        cout<<count<<endl;
    }
}