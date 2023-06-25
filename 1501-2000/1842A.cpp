#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        long long A=0, B=0;
        for (int i = 0; i < n; i++)
        {
            long a;
            cin>>a;
            A+=a;
        }
        for (int i = 0; i < m; i++)
        {
            long a;
            cin>>a;
            B+=a;
        }
        cout<<(A==B?"Draw":(A>B)?"Tsondu":"Tenzing")<<endl;
    }
}