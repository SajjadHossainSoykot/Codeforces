#include<stdio.h>
int main()
{
    int a, b, n;
    scanf("%d%d", &a, &b);
    int sum = a;
    while(a>=b)
    {   
        n = a/b;
        sum += n;
        a = n + a%b;
    }
    printf("%d\n", sum);
}