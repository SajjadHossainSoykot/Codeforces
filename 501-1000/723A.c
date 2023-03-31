#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int max =(a>b && a>c)?a:((b>c)?b:c);
    int min =(a<b && a<c)?a:((b<c)?b:c);
    //int mid = (a<b && b<c)?b:((b<a && a<c)?a:c);
    //int x = max-min;

    printf("%d\n",max-min);
}