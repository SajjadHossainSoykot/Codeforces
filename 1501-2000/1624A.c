#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n],max=0, min=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        max=a[0]; min=a[0];
        for (int i = 1; i < n; i++)
        {
            if(i!=0 && max<a[i])max=a[i];
            if(i!=0 && min>a[i])min=a[i];
        }
        printf("%d\n", max-min);
    }
    
}