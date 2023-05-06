#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a ="codeforces";
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int count=0;
        for (int i = 0; i < 10; i++)
        {
            if(a[i]!=s[i])count++;
        }
        cout<<count<<endl;
    }
    
}