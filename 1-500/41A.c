#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], t[100];
    scanf("%s",s);
    scanf("%s",t);
    int i,count=0, j=strlen(t)-1;
    for (i = 0; i < strlen(s); i++)
    {
        if(s[i]!=t[j]) 
        {
            count++;
            break;
        }
        j--;
    }
    if (count>0)
    {
        printf("NO\n");
    }
    else printf("YES\n");
    
}