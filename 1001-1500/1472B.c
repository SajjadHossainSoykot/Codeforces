#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, one=0, two=0, sum=0;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]==1) one++;
            if(a[i]==2) two++;
            sum+=a[i];
        }
        if(one%2!=0) printf("NO\n");
        else if (two%2!=0 && one>=2)printf("YES\n");
        else if(one%2==0 && two%2==0)printf("YES\n");
        else printf("NO\n");
    }
}