#include<stdio.h>
int main()
{
    int n, pos, i, lim, count = 0;
    scanf("%d %d", &n, &pos);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(i==(pos-1)) lim = a[i];
    }
    for (i = 0; i < n; i++)
    {
        if(a[i]>=lim && a[i]>0) count++;
    }
    printf("%d", count);
    return 0;
}