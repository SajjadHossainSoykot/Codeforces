#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long a, b;
        scanf("%ld%ld", &a, &b);
        int ans;
        if(a==b)ans = 0;
        else if(a<b)
        {
            long dif= b-a;
            if(dif%2!=0)ans = 1;
            else ans =2;
        }
        else
        {
            long dif= a-b;
            if(dif%2!=0)ans = 2;
            else ans =1;
        }
        printf("%d\n", ans);
    }
}