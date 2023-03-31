#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int x =0, y = 0;
        int match = 0;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='U')y++;
            else if(s[i]=='D')y--;
            else if(s[i]=='R')x++;
            else if(s[i]=='L')x--;
            if(x==1 && y==1) {match++; break;}
        }
        if(match==0)printf("NO\n");
        else printf("YES\n");
    }
}