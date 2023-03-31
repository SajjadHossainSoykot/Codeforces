#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int a[n];
    int count=1, max=1;
    cin>>a[0];
    for (int i = 1; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>a[i-1])count++;
        else
        {
            if(count>max)
            {
                max = count;
            }
            count = 1;
        }
    }
    if(count>max)
            {
                max = count;
                count = 1;
            }

    cout<<max<<endl;
    
}