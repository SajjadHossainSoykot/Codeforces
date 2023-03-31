#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int ans=n;
    if(n==m)ans++;
    else if(m<n)
    {
        ans = ans+ (n-1)/(m-1);
    }
    else ans=n;
    printf("%d\n", ans);
}