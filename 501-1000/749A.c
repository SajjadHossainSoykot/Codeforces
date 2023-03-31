#include<stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    if(n%2==0)
    {
        a = n/2;
        printf("%d\n", a);
        for (int i = 0; i < a; i++)
        {
            printf("2 ");
        }
        printf("\n");
    }
    else if(n==3)
    {
        printf("1\n3\n");
    }
    else
    {
        n= n-3;
        a = n/2;
        printf("%d\n", a+1);
        for (int i = 0; i < a; i++)
        {
            printf("2 ");
        }
        printf("3\n");
    }
}