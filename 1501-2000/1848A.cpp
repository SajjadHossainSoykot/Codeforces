#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,f=0;

        cin>>n>>m>>k;
        int x,y;
        cin>>x>>y;
        for(int i=0; i<k; i++)
        {
            int a,b;
            cin>>a>>b;
            if((abs(y-b)+abs(x-a))%2==0) f=1;

        }
        cout<<(f?"NO":"YES")<<endl;
    }
        return 0;

}