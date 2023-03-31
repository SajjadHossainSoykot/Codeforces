#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long int n;
        scanf("%ld", &n);
        int count=0;
        while (n!=1)
        {
           if(n%6==0) {n/=6; count++;}
           else if(n%3==0) {n *= 2; count++;}
           else {count=-1; break;}

        }
        printf("%d\n", count);
    }
}