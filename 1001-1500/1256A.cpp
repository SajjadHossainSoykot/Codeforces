#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a, b, n, s;
        cin>>a>>b>>n>>s;
        bool f = false;
        if((s%(a*n)==0 && a*n>=s) || (s/n<=a && s%n<=b) || (b>=s) || (s-(a*n)<=b && a*n<=s))  f= true;
        // if(s % n <= b && 1ll * a * n + b >= s) cout<<"YES\n";
        // else cout<<"NO\n";
        cout<<(f?"YES":"NO")<<endl;
    }
}