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
        string s;
        cin>>s;
        int bracket=0, count=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='(')bracket++;
            else bracket--;
            if(bracket<0)
            {
                count++;
                bracket=0;
            }
        }
        cout<<count<<endl;
    }
}