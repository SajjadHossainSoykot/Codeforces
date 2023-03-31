#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
     int x, i;
     scanf("%d", &x);
     int digit=0;
     int n = x;
     int y;
     for ( i = 1; i <=4; i++)
     {
        digit=n%10;
        if(n<10)break;
        n=n/10;
     }
     int sum=0;
     for(int j=i; j>=1; j--)
     {
        sum = sum + j;
     }
     y = (digit-1)*10 + sum;
     printf("%d\n",y);
    }
}