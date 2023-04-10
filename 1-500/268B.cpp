#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n;
    cin>>n;
    unsigned long long ans = (n*n*n-n)/6 + n;
    cout<<ans<<endl;
}