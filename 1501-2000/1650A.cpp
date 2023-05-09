#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        char c;
        cin>>c;
        int len = s.length();
        bool flag=false;
        for (int i = 0; i < len; i++)
        {
            if(c==s[i] && i%2==0)
            {
                flag=true;
                break;    
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
}