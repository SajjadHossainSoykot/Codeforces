#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int k =1 ; k<=t; k++)
    {
        int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int R=0, L=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='R')R++;
        else if(s[i]=='L')L++;
    }
    if (R==0 || L==0)
    {
        printf("-1\n");
    }
    else
    {
        if (s[0]=='R' && s[1]=='L' && R==1)
        {
            printf("0\n");
        }

        else if (s[0]=='L' && s[1]=='R' && R==1)
        {
            printf("1\n");
        }      
        else printf("%d\n", R+1);

    }

    }
    
}