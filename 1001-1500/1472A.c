#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int w, h;
        long n, pcs = 1;
        scanf("%d%d%ld", &w, &h, &n);
        if(n==1)
        {   printf("YES\n"); 
            continue;
        }
        while(w%2==0)
        {
           pcs *=2;
           w/=2;
        }
        while(h%2==0)
        {
           pcs *=2;
           h/=2;
        }
        if(pcs>=n)printf("YES\n");
        else printf("NO\n");
    }
}