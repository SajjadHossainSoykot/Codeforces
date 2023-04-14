#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long n, k;
        cin>>n>>k;
        long x = k + k/(n-1);
        if(x%n==0)x=x-1;
        cout<<x<<endl;
    }
}