#include<stdio.h>
int main()
{
    long int x;
    scanf("%ld", &x);
    int ans=0;
    while(x>1)
    {
        if(x%2==0) x/=2;
        else
        {
            x--;
            ans++;
        }
    }
    printf("%d\n", ans+1);
}