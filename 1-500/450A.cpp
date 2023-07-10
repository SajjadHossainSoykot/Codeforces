#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , m,val=0, index=0;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        int x = (a[i]+m-1)/m;
        if(x>=val)
        {
            index=i+1;
            val = x;
        }
         
    }
    cout<<index<<endl;
}