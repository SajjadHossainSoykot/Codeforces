#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int count=0;
        if(1440-a[n-1]>=240) count= count+2;
        else if(1440-a[n-1]>=120 && 1440-a[n-1]<240 ) count++;
        if(a[0]>=240) count= count+2;
        else if(a[0]>=120 && a[0]<240) count++;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i+1]-a[i]>=120 && a[i+1]-a[i]<240)count++;
            else if(a[i+1]-a[i]>=120)count+=2;
        }
        if(count>=2)printf("YES\n");
        else printf("NO\n");
    }
}