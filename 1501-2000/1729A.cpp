#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long a, b, c;
        long lift1,lift2;
        cin>>a>>b>>c;
        if(a==1)
        {
            cout<<1<<endl;
            continue;
        }
        lift1 = abs(a-1);
        lift2 = abs(c-b) + abs(c-1);
        int ans = (lift1==lift2)?3:((lift1<lift2)?1:2);
        cout<<ans<<endl;
    }
}