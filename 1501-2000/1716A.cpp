#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        long ans;
        if(n==1)ans=2;
        else if(n%3==0)ans=n/3;
        else ans =n/3 +1;
        cout<<ans<<endl;
    }
}