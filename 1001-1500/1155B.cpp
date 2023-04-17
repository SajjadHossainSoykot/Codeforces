#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    int move = n-11;
    int eight=0;
    for (int i = 0; i <=move; i++)
    {
        if(s[i]=='8')eight++;
    }
    if(eight>move/2)cout<<"YES\n";
    else cout<<"NO\n";
    
}