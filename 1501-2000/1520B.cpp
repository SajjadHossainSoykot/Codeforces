#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long int n;
        cin>>n;
        if(n<10)
        {
            cout<<n<<endl;
            continue;
        }
        long int ans = 9, add=11, num=0, count=0;
        while (num<=n)
        {   
            if(num%10!=0)ans++;
            num = num + add;
            if(num%10==0){add = num +1; num=num+1;}
        }
        cout<<ans<<endl;
    }
}