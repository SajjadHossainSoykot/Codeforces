#include<stdio.h>
int main()
{
    int a, b, c, i;
    scanf("%d%d%d",&a, &b, &c);
    int e[5];
    e[0] = a+b+c;
    e[1] = a*(b+c);
    e[2] = a*b*c;
    e[3] = (a+b)*c;
    int max = e[0];
    for(i=1;i<=3;i++)
    {
        if(max<e[i]) max = e[i];
    }
    printf("%d", max);
}