#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        char key[26];
        int hash[125]={0};
        for (int i = 0; i < 26; i++)
        {
            cin>>key[i];
            hash[key[i]]=i+1;
        }
        string s;
        cin>>s;
        int ans=0, len=s.length();
        for (int i = 0; i < len-1; i++)
        {
            ans += abs(hash[s[i]]-hash[s[i+1]]);
        }
        cout<<ans<<endl;        
    }
}