#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n, x;
    cin>>n>>x;
    long long sum = x, dis=0;
    for (int i = 0; i < n; i++)
    {
        char c;
        long d;
        cin>>c>>d;
        if(c=='+') sum += d;
        else
        {
            if(d>sum)dis++;
            else sum -= d;
        }
    }
    cout<<sum<<" "<<dis<<endl;
}