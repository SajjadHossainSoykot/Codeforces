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
        set<int>s;
        for (int i = 0; i < n; i++)
        {
            //Modification to lower memory space
            long a;
            cin>>a;
            s.insert(a);
        }
        cout<<s.size()<<endl;
    }
}