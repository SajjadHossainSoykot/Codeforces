#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long a, b, c;
        cin>>a>>b>>c;
        long x, y, z;
        x = max(b,c)+1-a;
        x = x>0?x:0;
        y = max(a,c)+1-b;
        y = y>0?y:0;
        z = max(a,b)+1-c;
        z = z>0?z:0;
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}