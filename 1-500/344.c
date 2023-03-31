#include<stdio.h>
#include<string.h>
int main()
{
    int n, count=1;
    scanf("%d", &n);
    int a[n];
    scanf("%d",&a[0]);
    if(n>1)
    {
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i-1]!=a[i])
        {
            count++;
        }
    }
    }
    printf("%d", count);
}