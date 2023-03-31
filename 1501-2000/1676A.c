#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[7];
        scanf("%s",s);
        int sum1 = s[0] + s[1] + s[2];
        int sum2 = s[3] + s[4] + s[5];
        if(sum1==sum2) printf("YES\n");
        else printf("NO\n");   
    }
    
}