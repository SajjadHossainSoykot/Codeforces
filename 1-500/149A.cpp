#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    int a[12], total=0;
    for (int i = 0; i < 12; i++)
    {
        cin>>a[i];
        total += a[i];
    }
    if(total<k)
    {   cout<<-1<<endl;
        return 0;
    }
    sort(a,a+12,greater<int>());
    int sum=0, count=0;
    while(sum<k)
    {
        sum += a[count];
        count++;
    }
    cout<<count<<endl;   
}