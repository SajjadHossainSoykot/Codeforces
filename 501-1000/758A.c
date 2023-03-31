#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], max;
    scanf("%d", &a[0]);
    max = a[0];
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]>max) max = a[i];
    }
    int sum=0;
    for ( int i = 0; i < n; i++)
    {
        sum = sum + (max-a[i]);
    }
    printf("%d\n", sum);
}