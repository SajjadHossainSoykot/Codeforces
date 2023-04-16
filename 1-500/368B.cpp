#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int a[n+1];
    bool hash[100005]; 
    int d[100005]={0};
    for (int i = 1; i <=n; i++)
    {
        cin>>a[i];
    }
     for (int i = n; i >= 1; i--)
    {
        if (!hash[a[i]]) 
        d[i]++;
        hash[a[i]] = true;
    }
    for (int i = n; i >= 1; i--)
        d[i] += d[i + 1];

    while (m--)
    {
        int l;
        cin>>l;
        cout<<d[l]<<endl;
    }
}