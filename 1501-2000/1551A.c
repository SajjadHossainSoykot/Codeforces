#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long int n;
        scanf("%ld", &n);
        long int c1, c2;
        if(n==1) {c1=1; c2=0;}
        else if(n==2) {c1=0; c2=1;}
        else
        {
            c1 = n/3;
            c2 = (n-n/3)/2;
            long int sum=c1+2*c2;
            if(sum!=n)
            {
                if(n-sum==1)c1=c1+1;
                else if(n-sum==2) c2=c2+1;
            }
        }
        printf("%ld %ld\n", c1, c2);
    }
}