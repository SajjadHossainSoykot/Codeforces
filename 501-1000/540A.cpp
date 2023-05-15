#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s1, s2;
    cin>>s1>>s2;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int count;
        int x = min(s1[i],s2[i]);
        int y = max(s1[i],s2[i]);
        sum = sum + min(y-x, x+10-y);
    }
    cout<<sum<<endl;
}