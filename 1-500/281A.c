#include<stdio.h>
int main()
{
    char a[1000];
    scanf("%s", a);
    if(a[0]>96) a[0] = a[0]-32;
    printf("%s", a);
}