#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int count = 0, q=0, a=0 ;
    for (int i = 0; i < n ; i++)
    {
        if(s[i]=='Q')
        {   
            count += a;
            q++;
        }
        else if(s[i]=='A')
        {
            a += q;
        }
    }
    cout<<count<<endl;
}