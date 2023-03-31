#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    int max, min;
    max = (a>b)?a:b;
    min = (a<b)?a:b;
    printf("%d ", min);
    printf("%d\n", (max-min)/2);
}