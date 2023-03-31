#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i <t; i++)
    {   
        long int a, b;
        scanf("%ld%ld", &a, &b);
        long int count;
        if(a%b==0)count = 0;
        else if(a<b) count = b-a;
        else count = b - (a%b);
        printf("%ld\n", count);
    }
    
}