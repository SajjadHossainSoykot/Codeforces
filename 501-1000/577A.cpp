#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n, x, count=0;
    cin>>n>>x;
    for (int i = 1; i <=n; i++)
    {
        if(x%i==0 && x/i<=n)count++;
    }
    cout<<count<<endl;    
}