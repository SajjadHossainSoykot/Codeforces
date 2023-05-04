#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.length();
    int a[n/2 +1], j=0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0)a[j++]=s[i]-48;
    }
    sort(a,a+n/2+1);
    j=0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0)cout<<a[j++];
        else cout<<"+";
    }
    cout<<endl;
}