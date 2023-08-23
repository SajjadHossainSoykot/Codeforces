#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string y;
        for (int i = 0; i <50; i++)
        {
            y+="Yes";
        }
        string s;
        cin>>s;
        cout<<(y.find(s)!=-1?"YES":"NO")<<endl;
    }
}