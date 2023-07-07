#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int ans=0, n=1;
        for (int i = 9; i>0; i--)
        {
            if (x>=i)
            {
                x-=i;
                ans+=n*i;
                n*=10;
            }
        }
        cout<<(x?-1:ans)<<endl;
    }
}