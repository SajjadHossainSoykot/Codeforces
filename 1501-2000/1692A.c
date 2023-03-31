#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a[4], count=0;
        scanf("%d", &a[0]);
        for (int  i = 1; i <4; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]>a[0])count++;
        }   
        printf("%d\n", count);     
        
    }
}