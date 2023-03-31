#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m=0, c=0;
    while (n--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        if(a>b) m++;
        else if(a<b) c++;
    }
    if(m>c)printf("Mishka\n");
    else if(m<c)printf("Chris\n");
    else printf("Friendship is magic!^^\n");
}
