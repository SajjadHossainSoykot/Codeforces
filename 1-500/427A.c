#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum = 0, count=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            sum = sum + a[i];
        }
        if(a[i]<0)
        {
            if(sum==0)count++;
            else {
                sum = sum - 1;
            }
        }
    }    
    printf("%d\n", count);
}