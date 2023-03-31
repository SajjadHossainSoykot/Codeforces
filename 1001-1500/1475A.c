#include<stdio.h>
int Div(long long int n)
{   long long int odd;
    odd = n&(n-1);
    if(odd==0)printf("NO\n");
    else printf("YES\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        Div(n);
    }
}