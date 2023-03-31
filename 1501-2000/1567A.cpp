#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        char s[n];
        cin>>s;
        // int len= strlen(s);
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='U')cout<<"D";
            else if(s[i]=='D')cout<<"U";
            else cout<<s[i];
        }
        cout<<endl;
    }
}