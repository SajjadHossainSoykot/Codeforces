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
        long int b[n];
        bool flag=false; 
        int j=0, k=n-1;
        for (int i = 0; i < n;i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(flag==false)
            {
                cout<<b[j++]<<" ";
                flag=true;
            }
            else 
            {
                cout<<b[k--]<<" ";
                flag=false;
            }
        }
        cout<<endl;
    }
}