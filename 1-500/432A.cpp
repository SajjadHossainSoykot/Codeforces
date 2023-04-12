#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, count=0;
    cin>>n>>k;
    int y[n];
    for (int i = 0; i < n; i++)
    {
        cin>>y[i];
    }
    sort(y, y+n);
    for (int i = 0; i < n; i++)
    {
        if((i+1)%3==0)
        {
            if(y[i]+k<6)count++;
        }
    }
    cout<<count<<endl;
}