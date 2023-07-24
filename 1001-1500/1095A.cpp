#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    for (int i = 0,j=0; i < n; j++, i+=j)
    {
        cout<<s[i];
    }
    cout<<endl;
}