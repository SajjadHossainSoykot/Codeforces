#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    if(n%2==0)
    {
        for (int i = 1; i <=n ; i++)
        {
            if(i%2!=0)cout<<i+1<<" ";
            else cout<<i-1<<" ";
        }
        cout<<endl;
    }
    else
    {
        for (int i = 1; i <n-2 ; i++)
        {
            if(i%2!=0)cout<<i+1<<" ";
            else cout<<i-1<<" ";
        }
        cout<<n<<" "<<n-2<<" "<<n-1<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        solve(n);
    }
}