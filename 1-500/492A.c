#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int h=0, sum=0, i=1;
    while (n>0)
    {
        sum += i;
        if(n-sum>=0)h++;
        n-=sum;
        i++;
    }
    printf("%d\n", h);
    
}