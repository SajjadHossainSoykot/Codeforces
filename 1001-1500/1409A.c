#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t; 
    scanf("%d", &t);
    for (int test = 1; test <= t; test++)
    {
        
        long int a, b;
        scanf("%ld%ld", &a, &b);
        if (a==b)
        {
            printf("0\n");
        }
        else
        {
            long int c = abs(a-b);
            long int k;
            if(c<11)k=1;
            else if (c%10==0)
            {
                k = c/10;
            }
            else {k = c/10 + 1;}
            printf("%ld\n", k);
        }
    }
}