#include<stdio.h>
int prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a = n+1;
    while (1)
    {   
        if(prime(a)!=0)break;
        a++;
    }
    //printf("%d\n", a);
    
    if(a==m)printf("YES\n");
    else printf("NO\n");

}