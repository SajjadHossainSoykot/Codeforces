#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[] = {4, 7, 47, 74, 444, 447, 474,744, 477, 774,747,777};
    int count = 0;
    for (int i = 0; i < 12; i++)
    {
        if(n%a[i]==0){count++; break;}
    }
    if(count!=0)printf("YES\n");
    else printf("NO\n");
    
}