#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin>>n>>t;
    if(n==1 && t==10)cout<<"-1\n";
    else if(n>1 && t==10)
    {   
        cout<<"1";
        for (int i = 1; i <n; i++)
        {
            cout<<"0";
        }
        cout<<"\n";
    }
    else
    {
        for (int i = 1; i <=n; i++)
        {
            cout<<t;
        }
        cout<<"\n";
    }
    
}