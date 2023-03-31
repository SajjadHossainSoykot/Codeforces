#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int h, m;
        scanf("%d%d", &h, &m);
        int d = 24*60;
        int min = d - h*60-m;
        printf("%d\n", min);
    }
    
}