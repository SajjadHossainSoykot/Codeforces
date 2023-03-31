#include<stdio.h>
int main()
{
    int n, m, a, b;
    scanf("%d%d%d%d", &n, &m, &a, &b);
    int result; 
    if(m*a>b)
    {
       int rem = (n%m)*a;
        if(rem>b)
        {
           result=n/m *b + b;
        }
        else
        {
           result=n/m *b +rem;
        }
    }
    else
    {
        result=n*a;
    }
    printf("%d\n", result);
}
