#include<stdio.h>
int main()
{
   int n;
   scanf("%d", &n);
   long int a[n], max=0, count=0;
   for (int i = 0; i < n; i++)
   {
        scanf("%ld", &a[i]);
   }
   for (int i = 0; i < n-1; i++)
   {
        if(a[i]<=a[i+1]){count++; if(max<count) max = count;}
        if(a[i]>a[i+1])
        {
            if(max<count) max = count;
            count = 0;
        }
   }
   printf("%ld", max+1);

    
}