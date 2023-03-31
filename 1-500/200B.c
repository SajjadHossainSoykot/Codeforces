#include<stdio.h>
int main()
{
    int n;
    float p, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        scanf("%f", &p);
        sum = sum + p;
    }
    printf("%.12f", sum/n);
}