#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<string>sub;
        for (int i = 0; i < n-1; i++)
        {
            string sb;
            sb = s.substr(i,2);
            sub.insert(sb);
        }
        cout<<sub.size()<<endl;
    }
}