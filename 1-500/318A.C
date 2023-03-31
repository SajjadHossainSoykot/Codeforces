#include<stdio.h>
int main()
{
    long long int n, k, mid, v;
    scanf("%I64d%I64d", &n, &k);
    if (n%2==0) 
    {
        mid = n/2;
        if(k<=mid)
        {
            v = (k*2)-1;
        }
        else v = (k-mid)*2;
    
    }
    else 
    {
        mid = (n/2)+1;
        if(k<=mid)
        {   
            v = (k*2)-1;
        }
        else v = (k-mid)*2;
    }
    printf("%I64d", v);
}
