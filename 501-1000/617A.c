#include<stdio.h>
int main()
{
    int x, sum = 0, aux;
    scanf("%d",&x);
    sum = sum + x/5;
    aux = x%5;
    sum = sum + aux/4;
    aux = aux%4;
    sum = sum + aux/3;
    aux = aux%3;
    sum = sum + aux/2;
    aux = aux%2;
    sum = sum + aux;
    printf("%d", sum);

}