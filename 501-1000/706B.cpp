#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0; i<n; i++) cin>>x[i];
    sort(x,x+n);
    int q;
    cin>>q;
    while (q--)
    {
        long m;
        cin>>m;
        int count= upper_bound(x,x+n,m)-x;
        cout<<count<<endl;
    }
}