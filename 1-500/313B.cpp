#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int m, count=0, hash[100005];
    cin>>m;
    for (int i = 1; i <s.size(); i++)
    {
            if(s[i]==s[i-1])count++;

            hash[i]=count;
    }
    while (m--)
    {
        int l, r;
        cin>>l>>r;
        cout<<hash[r-1]-hash[l-1]<<endl;
    }
}