#include<stdio.h>
int main()
{
    int i, c;
    scanf("%d", &c);
    int sum[c];
    int enter, exit;
    sum[0]=0;
    int max = sum[0];
    for (i = 1; i <=c; i++)
    {
        scanf("%d%d", &exit, &enter);
        sum[i] = sum[i-1] + enter - exit; 
        if (sum[i]>max)
        {
            max = sum[i];
        }       
    }
    printf("%d", max);
}