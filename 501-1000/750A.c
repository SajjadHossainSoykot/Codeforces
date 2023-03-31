#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int sum = k, i;
    for (i = 1; i<=n && sum<=240; i++)
    {
        sum = sum + i*5;
        if(sum>240){break;}
    }
    printf("%d\n", i-1);
}