#include<bits/stdc++.h>
using namespace std;
int main()
{
        int d, len, count=0;
        char s[101];
        cin>>s;
        len =strlen(s);
        d=abs(s[0]-'a');
        if(d<=13)
            count+=d;
        else
        {
            count+=(26-d);
        }
        for(int i=0;i<len-1;i++)
        {
            d=abs(s[i]-s[i+1]);

            if(d<=13)
                count+=d;
            else
            {
                count+=(26-d);
            }
        }
        cout<<count<<endl;
        return 0;

}