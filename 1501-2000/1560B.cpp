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
        long ans;
        long d = abs(a-b);
        if(d>=min(a,b) && 2*d>=c)
        {
            if(c<=d) c+=d;
            else c -= d;
            cout<<c<<endl;
        }
        else cout<<-1<<endl;
    }
}