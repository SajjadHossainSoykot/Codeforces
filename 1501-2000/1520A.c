#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        int sus=0;
        for (int i = 0; i < n; i++)
        {   
            if(s[i]!=s[i+1]){
            for(int j=i+1; j<n; j++){
                if(s[i]==s[j])
                {sus++;break;}
                }
            }
        }
        if(sus==0)printf("YES\n");
        else printf("NO\n");

    }
    
}