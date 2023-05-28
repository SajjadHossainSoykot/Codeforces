#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        int h1=3;
        int h2=2;
        int h3=1;
        n-=6;
        int x=n/3;
        int rem=n%3;
        h1+=x;
        h2+=x;
        h3+=x;
        if(rem==1) h1++;
        if(rem==2) 
        {
            h1++;
            h2++;
        } 
    cout<<h2<<" "<<h1<<" "<<h3<<endl;
    }
}