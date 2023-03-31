#include<stdio.h>
int tPrime(long long int* n)
{
    int divisor=0;
    for (long long int  i = 1; i <= *n; i++)
    {
        if((*n)%i==0) divisor++;
        if(divisor>3) break;
    }
    if(divisor==3)printf("YES\n");
    else printf("NO\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    long long int *ptr = a;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", ptr);
        ptr++;
    }
    ptr = a;
    for (int i = 0; i < n; i++)
    {
        //printf("%lld ", *ptr);
        tPrime(ptr);
        ptr++;
    }
}