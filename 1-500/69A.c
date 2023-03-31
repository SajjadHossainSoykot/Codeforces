#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x[n], y[n], z[n], sum1=0, sum2=0, sum3= 0;
    for (int i = 0; i <n; i++)
    {
        scanf("%d%d%d", &x[i], &y[i], &z[i]);
        sum1 = sum1 + x[i];
        sum2 = sum2 + y[i];
        sum3 =  sum3 + z[i];

    }   
    if(sum1==0 && sum2==0 && sum3==0)printf("YES\n");
    else printf("NO\n");

}