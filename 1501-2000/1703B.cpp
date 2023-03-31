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
        char s[n];
        cin>>s;
        int hash[100]={0};
        for (int i = 0; i < n; i++)
        {
            if(hash[s[i]]==0)hash[s[i]]+=2;
            else hash[s[i]]++;
        }
        int sum=0;
        int total = accumulate(hash, hash+100, sum);
        cout<<total<<endl;
    }
}