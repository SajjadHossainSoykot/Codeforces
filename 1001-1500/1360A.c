#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a,b;
        scanf("%d%d", &a, &b);
        int min;
        if(a==b) min=a+b;
        else if(a<b) {min=(2*a>b)?2*a:b;}
        else if(b<a) {min=(2*b>a)?2*b:a;}
        printf("%d\n", min*min);
    }
}