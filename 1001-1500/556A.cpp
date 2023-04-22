#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int one=0, zero=0;
    char s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
        if(s[i]=='0')zero++;
        else if(s[i]=='1')one++;
    }
    cout<<abs(one-zero)<<endl;  
}