#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[4];
        scanf("%s", s);
        if((s[0]=='Y' || s[0]=='y') && (s[1]=='E' || s[1]=='e') && (s[2]=='S' || s[2]=='s')) printf("YES\n");
        else printf("NO\n");

    }
    
}