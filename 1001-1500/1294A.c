#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, n, sum;
        scanf("%d%d%d%d", &a, &b, &c, &n);
        sum = a + b + c + n;
        if(sum%3==0)
        {
            int avg = sum/3;
            int da = abs(avg - a);
            int db= abs(avg - b);
            int dc= abs(avg - c);
            if(da+db+dc == n) printf("YES\n");
            else printf("NO\n");
        }
        else printf("NO\n");
    }
}