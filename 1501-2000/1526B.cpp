#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<((n / 111 >= n % 11) ? "YES" : "NO")<<endl;
    }
}