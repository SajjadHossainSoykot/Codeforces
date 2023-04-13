#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        unsigned long long x, y, a, b, ans1, ans2;
        cin>>x>>y>>a>>b;
        if(x>y)
        {
            swap(x,y);
        }
        ans1 = x*b + (y-x)*a;
        ans2 =x*a + y*a;
        cout<<min(ans1,ans2)<<endl;
    }
}