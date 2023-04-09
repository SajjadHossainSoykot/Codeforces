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
        int len = s.length();
        //cout<<len<<endl;
        int hash[123]={0};
        int col=0, dis=0;
        for (int i = 0; i < s.length(); i++)
        {
            if(hash[s[i]]==0)
            {
                hash[s[i]]++;
                dis++;
            }
            else if(hash[s[i]]==1)
            {
                hash[s[i]]++;
                col++;
                dis--;
            }
        }
        int ans = (len!=1)? col+dis/2:0;
        cout<<ans<<endl;
    }
}