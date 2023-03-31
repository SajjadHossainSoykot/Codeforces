#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, x, floor=1;
        cin>>n>>x;
        if(n==1 || n==2) floor=1;
        else
        {
            int sum=2;
            while (sum<n)
            {
                sum = sum+x;
                floor++;
            }
        }
        cout<<floor<<endl;
    }
}