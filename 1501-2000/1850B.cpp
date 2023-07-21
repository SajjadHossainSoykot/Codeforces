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
        int a[n], b[n], max=-1, index;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i]>>b[i];
            if(b[i]>max && a[i]<=10 )
            {
                max = b[i];
                index = i+1;
            }
        }
        cout<<index<<endl;
    }
}