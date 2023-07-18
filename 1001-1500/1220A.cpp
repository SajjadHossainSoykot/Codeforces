#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    //sort(s.begin(),s.end());
    int n_count = 0;
    int z_count = 0;

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='n')n_count++;
        else if(s[i]=='z')z_count++;
    }
    for (int i = 0; i < n_count; i++)
    {
        cout<<"1 ";
    }
    for (int i = 0; i < z_count; i++)
    {
        cout<<"0 ";
    }
    cout<<endl;
}