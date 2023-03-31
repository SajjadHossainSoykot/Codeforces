#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int l = strlen(s);
    int match = 0;
    char O[4];
    for (int i = 0; i < l-1; i++)
    {
        if(s[i]==s[i+1]) {match++; if(match==6) break;}
        else if(s[i]!=s[i+1]) match=0;
    }
    if(match==6)printf("YES\n");
    else printf("NO\n");
}