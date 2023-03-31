#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long int n;
        scanf("%ld", &n);
        if(n<3)printf("0\n");
        else if (n%2==0)
        {
            printf("%ld\n", (n/2)-1);
        }
        else printf("%ld\n", (n/2));
    }
    
}