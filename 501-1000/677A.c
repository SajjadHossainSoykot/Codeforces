#include<stdio.h>
int main()
{
    int n,h, w = 0;
    scanf("%d%d",&n,&h);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i]>h)
        {
            w = w + 2;
        }
        else w = w+1;
    }
    printf("%d", w);
    
}