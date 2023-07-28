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
        int a[4]={0};
        cin>>a[1]>>a[2]>>a[3];
        cout<<(a[x]!=0 && a[a[x]]!=0?"YES":"NO")<<endl;
    }
}