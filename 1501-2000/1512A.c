#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int test=1; test<=t; test++)
    {
        int n, eq;
        scanf("%d", &n);
        int a[n];
        scanf("%d%d%d", &a[0], &a[1], &a[2]);
        if(a[0]==a[1]) eq=a[0];
        else if(a[0]==a[2]) eq=a[0];
        else if(a[1]==a[2]) eq=a[1];
        for (int i = 3 ; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]!=eq)
            {
                printf("%d\n", i+1);
                break;
            }
        }   
    }
}