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
        for (int i = 0; i < n/2; i++)
        {
            if(s[i]!=s[n-i-1])match++;
            if(s[i]==s[n-i-1])break;
        }
        int ans= n-match*2;
        printf("%d\n",ans);
    }
}