#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    long long count = 0;
    cin>>n>>m;
    int a[m], current = 1;
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
        if(a[i]>current)
        {
            count += a[i]-current;
            current = a[i];
        }
        else if(current==a[i])
        {
            current = a[i];
        }
        else
        {
            count += (n-current)+a[i];
            current = a[i];
        }
    }
    cout<<count<<endl;
}