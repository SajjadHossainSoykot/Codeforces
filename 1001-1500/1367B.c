#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int OK=0, swap1=0, swap2=0;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0)
            {
                if(a[i]%2!=0)swap1++;
            }
            else if (i%2==1) 
            {
                if(a[i]%2==0)swap2++;
            }
        }
        if(swap1==0 && swap2==0)printf("0\n");
        else if(swap1==swap2)printf("%d\n", swap1);
        else printf("-1\n");
    }
}