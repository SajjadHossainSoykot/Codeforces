#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);
    if (n<26)
    {
        printf("NO\n");
    }
    else
    {
        int count=0;
        for (int i = 65; i <=90; i++)
        {
            for(int j=0 ; j<n; j++)
            {
                if(s[j]==i || s[j]==i+32)
                {
                    count++;
                    break;
                }
            }
        }
        if(count==26)printf("YES\n");
        else printf("NO\n");  
    }
}