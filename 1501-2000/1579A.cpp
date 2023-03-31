#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        char s[51];
        cin>>s;
        int len= strlen(s);
        int a=0, b=0, c=0;
        for (int i = 0; i < len; i++)
        {
            if(s[i]=='A')a++;
            else if(s[i]=='B')b++;
            else if(s[i]=='C')c++;
        }
        if(b==a+c)cout<<"YES\n";
        else cout<<"NO\n";
    }
}