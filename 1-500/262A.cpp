#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n , k;
    cin>>n>>k;
    long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        int x=a[i];
        int lucky = 0;
        while (x>0)
        {
            if(x%10==4 || x%10==7)lucky++;
            x=x/10;
        }
        if(lucky<=k)count++;
    }
    cout<<count<<endl;        
}