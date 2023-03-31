#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long int n;
        scanf("%ld", &n);
        long int ans = (n%2==0)?n/2: n/2 + 1;
        printf("%ld\n", ans);
    }
}