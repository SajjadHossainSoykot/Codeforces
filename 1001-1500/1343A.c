#include<stdio.h>
#include<math.h>
#define lim 10e9
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        for (int i = 2; i < lim; i++)
        {
            int a = pow(2,i)-1;
            if(n%a==0)
            {
                printf("%d\n", n/a);
                break;
            }
        }
        
    }
}