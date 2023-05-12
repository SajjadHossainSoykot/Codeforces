#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int max=0, count=0;
    string ans;
    for (int i = 0; i < n; i++)
    {
        count=0;
        for(int j = 0; j< n ; j++)
        {
            if(s[i]==s[j] && s[i+1]==s[j+1])
            {
                count++;
                if(count>max)
                {
                    max = count;
                    ans = string(1,s[i])+string(1,s[i+1]);
                }
            }
        }
    }
    cout<<ans<<endl;    
}