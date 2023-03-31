#include<stdio.h>
int main()
{
    long long int sum, n;
    scanf("%lld", &n);
    
    sum = (n%2==0)?(n/2):-1*((n+1)/2);
    printf("%lld", sum);
}