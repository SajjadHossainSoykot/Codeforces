#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long x,y,z;
        cin>>x>>y>>z;
        if(x>y)swap(x,y);
        if(x>z)swap(x,z);
        if(y>z)swap(y,z);
        if(y==z){
            cout<<"YES\n";
            cout<<x<<" "<<x<<" "<<z<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
    }

}