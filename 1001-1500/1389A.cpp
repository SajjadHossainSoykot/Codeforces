#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long l, r, x, y;
        cin>>l>>r;
        if(l*2<=r)
        {
            x = l;
            y = l*2;
        }
        else
        {
            x = -1;
            y = -1;            
        }
        cout<<x<<" "<<y<<endl;
    }
}