#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A, B;
        cin>>A>>B;
        if(B==1){
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<A<<" "<<1LL*A*B<<" "<<1LL*A*B+A<<endl;
        }
        
    }
}