#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        long int a[n],sum1=0 max=0, min=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sum1 += a[i];
        }
        int dif = 0, save;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i]<0)
            {
                if(fabs(a[i]-a[i+1]) && a[i]*a[i+1]<0)
                {
                    save = i;
                }
            }
        }





    }
}