#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;
        int i=0;
        int ans=n;
        while (ans!=0)
        {
            i++;
            ans/=2;
        }
        cout << (1<<(i-1))-1 << endl;
    }
}