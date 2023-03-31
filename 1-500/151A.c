#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np;
    scanf("%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int a = (k*l)/nl;
    int b = (c*d);
    int f = p/np;
    int min = (a<f && a<f)? a: ((b<f)?b:f);
    printf("%d\n", min/n);
}