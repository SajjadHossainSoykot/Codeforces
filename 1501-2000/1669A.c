#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int r, x;
        scanf("%d", &r);
        if(r>=1900) x=1;
        else if(r>=1600 && r<=1899) x=2;
        else if(r>=1400 && r<=1599) x=3;
        else x=4;
        printf("Division %d\n", x);
    }
}