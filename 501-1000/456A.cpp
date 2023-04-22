#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {   
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.rbegin(),v.rend());
    bool flag=false;
    for (int i = 0; i < n-1; i++)
    {
        if(v[i].second<v[i+1].second)flag=true;
    }
    if(flag)cout<<"Happy Alex\n";
    else cout<<"Poor Alex\n";
}