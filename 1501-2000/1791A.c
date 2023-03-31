#include<stdio.h>
int main()
{
    char s[8]="codefrs";
    char c;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int match = 0;
        scanf(" %c",&c);
        for (int i = 0; i < 8; i++)
        {
           if(s[i]==c){match++; break;}
        }
        if(match==0)printf("NO\n");
        else printf("YES\n");
    }
}