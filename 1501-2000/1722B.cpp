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
        char a[n], b[n];
        //cin>>a>>b;
        scanf("%s %s", a, b);
        bool same=true;
        for (int i = 0; i < n; i++)
        {
            if(a[i]=='R' && (b[i]=='G' || b[i]=='B'))
            {
                same=false;
                break;
            }
            else if(b[i]=='R' && (a[i]=='G' || a[i]=='B'))
            {
                same=false;
                break;
            }
        }
        if(same)cout<<"YES\n";
        else cout<<"NO\n";
    }
}