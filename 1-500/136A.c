#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n+1], b;
    for (int i = 1; i <=n; i++)
    {
       scanf("%d", &b);
       a[b] = i;
    }
    for (int i = 1; i <=n; i++)
    {
       printf("%d ", a[i]);
    }
}