#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        int ans;
        bool flag = false;
        if ((s.back()-'0')%2==0)
        {
            flag = true;
            cout<<0<<endl;
            continue;
        }
        else 
        {
            int x;
            for (int i = 0; i <n; i++)
            {
                if((s[i]-'0')%2==0 && i==0)
                {
                    flag = true;
                    ans = 1;
                    break;
                    
                }
                else if((s[i]-'0')%2==0 && i!=0)
                {
                    flag = true;
                    ans = 2;
                    break;
                }
            }
        }
        if(flag)cout<<ans<<endl;
        else cout<<-1<<endl; 
    }
}