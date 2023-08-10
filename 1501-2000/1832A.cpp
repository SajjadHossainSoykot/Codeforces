#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string sub= s.substr(0,s.size()/2);
        int f = unique(sub.begin(),sub.end())-sub.begin();
        cout<<(f==1?"NO":"YES")<<endl;
    }
}