#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n<2020) printf("NO\n");
        else if(n%2020==0 || n%2021==0 || n%2020==1)printf("YES\n");
        else if(n%2020 <= n/2020)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
}