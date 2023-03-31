#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int h[n], sum[n];
    for (int i = 0; i < n; i++)
    {
        cin>>h[i];
        if(i==0)sum[0]=h[0];
        else sum[i]=sum[i-1]+h[i];
    }
    // int min=*(min_element(sum,sum+n-k));
    // int index= find(sum,sum+n-k,min)-sum;
    int min=sum[k-1],save=1;
    for (int i = 1; i < n-k+1; i++)
    {
        // if(i==0 && sum[k-1]<min)
        // {
        //     min=sum[k-1];
        //     save = i+1;
        // // }
        // else 
        if(sum[i+k-1]-sum[i-1]<min)
        {   
            min=sum[i+k-1]-sum[i-1];
            save = i+1;
        }
    }
    cout<<save<<endl;
}