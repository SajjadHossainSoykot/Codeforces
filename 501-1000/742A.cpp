#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    cin>>n;
    if(n==0)
    {
        cout<<1<<endl;
        return 0;
    }
    int ans[]={6,8,4,2};
    cout<<ans[n%4]<<endl;    
}