#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string a[m],b[m],c[n],ans[n];
    for (int i = 0; i < m; i++)
    {
        cin>>a[i]>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
        for ( int j = 0; j < m; j++)
        {
            if(c[i]==a[j])
            {
                int len1, len2;
                len1 = a[j].length();
                len2 = b[j].length();
                if(len1==len2 || len1<len2)ans[i]=a[j];
                else ans[i]=b[j];
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}