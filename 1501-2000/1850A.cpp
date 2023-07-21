#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int a, b, c;
        cin>>a>>b>>c;
        bool f = false;
        if(a+b>=10 || b+c>=10 || a+c>=10 ) f=true;
      

        cout<<(f?"YES":"NO")<<endl;

    }

        return 0;

}