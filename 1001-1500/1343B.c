#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int sum1=0, sum2=0;
        int a[n];
        if (n%2==0)
        {
            if (n%4==0)
            {
                printf("YES\n");
                int k = 2;
                for (int i = 0; i < n/2; i++)
            {
                a[i]=k; 
                sum1 = sum1 + a[i];
                k=k+2;                           
            }
            //sum1=sum1+a[n/2 -1];
            sum2=1;        
            int j = 1;
            for (int i = n/2; i < n-1; i++)
            {   
                a[i]= j;
                sum2=sum2+a[i];
                j=j+2;
            }
            a[n-1] = sum1-sum2+1;
            sum2 = sum2+a[n-1];
            //printf("sum1 = %d sum2 = %d", sum1, sum2);
            for (int i = 0; i < n; i++)
            {   
                printf("%d ", a[i]);
            }
            printf("\n");
            }
            else printf("NO\n");
            
        }
        else printf("NO\n");

    }
    
}
        //for (int i = 0; i < n/2; i++)
        // {
        //     sum1 = sum1 + 2;
        //     a[i]=sum1;            
        // }
        // int j = 1;
        // for (int i = n/2; i < n-1; i++)
        // {   
        //     a[i]= j;
        //     sum2=sum2+a[i];
        //     j=j+2;
        // }
        // a[n-1] = sum1-sum2;
        // sum2 = sum2+a[n-1];
        // //printf("sum1= %d  sum2 =%d\n", sum1, sum2);
        // if(a[n-1]%2==0){printf("NO\n");}
        // else 
        // {   printf("YES\n");
        //     for (int i = 0; i < n; i++)
        //     {
        //         printf("%d ", a[i]);
        //     }
        //     printf("\n");
        // }