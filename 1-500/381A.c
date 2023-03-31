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
    int sum1=0, sum2=0;
    int j=1;
    for (int i = 0; i < n; i++)
    {
        if(j%2!=0)\
        {
            if(a[i]<a[n-1]) 
            {
                sum1= sum1+ a[n-1];
                n = n-1;
                i--;
            }
            else
            {
                sum1= sum1+a[i];
            }
        }
        else 
        {
            if(a[i]<a[n-1]) 
            {
                sum2= sum2+ a[n-1];
                n = n-1;
                i--;
            }
            else
            {
                sum2= sum2+a[i];
            }
        }
        j++;
    }
    printf("%d %d\n", sum1, sum2);
    
}