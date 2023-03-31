#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    long int sum = 0;
    sum = sum + n/100;
    n = n%100;
    sum = sum + n/20;
    n = n%20;
    sum = sum + n/10;
    n = n%10;
    sum = sum + n/5;
    n = n%5;
    sum = sum + n;
    printf("%ld\n", sum);

}