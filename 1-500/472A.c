#include<stdio.h>
int p(int n)
{ 
    int prime = 0;
    for (int i = 2; i <n; i++)
    {
        if(n%i==0) {prime++; break;}
    }
    return prime;
}
int main()
{
     long int n,a,b;
     scanf("%ld", &n);

     a=4;
     b=n-4;

     for ( int i=1; i<=n; i++)
     {
         int m= p(a);
         int n= p(b);
         if (n==1 && m==1)
         {
             printf("%ld %ld\n", a, b);
             return 0;
         }
         a++;
         b--;
     }
}