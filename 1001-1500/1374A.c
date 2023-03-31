#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long int x , y, n, k;
        scanf("%ld%ld%ld", &x, &y, &n);
        k = n- (n-y)%x;
        printf("%ld\n", k);
    }
    
}