#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int l =strlen(s);
    int count=0;
    for (int i = 0; i < l; i++)
    {
        if (s[i]=='H' || s[i]=='Q' || s[i]=='9')
        {
            count++;
            break;
        }
    }
    if(count!=0)printf("YES\n");
    else printf("NO\n");
}