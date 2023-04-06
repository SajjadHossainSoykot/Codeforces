#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, e=0, o=0;
        cin>>n;
        long a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)e++;
            else o++;
        }
        cout<<min(e,o)<<endl;
    }
}