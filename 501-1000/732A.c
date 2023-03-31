#include<stdio.h>
int main()
{
    int k, r;
    scanf("%d%d", &k, &r);
    int i;
    int sum ;
    for (i = 1; i <=10; i++)
    {
        sum = k*i;
        if (sum%10==0 || sum%10==r)break;
    }
    printf("%d\n", i);
}