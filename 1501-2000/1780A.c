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
        int even=0, odd=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]%2==0)even++;
            else odd++;
        }
        int e[even], o[odd], ie=0, io=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==0) {e[ie]=i+1; ie++;}
            else {o[io]=i+1; io++;}
            if(ie>4 && io>4) break;
        }
        if(odd==0){printf("NO\n");}
        else
        {
            if(odd>=3)
            {   
                printf("YES\n");
                printf("%d %d %d\n",o[0], o[1], o[2]);
            }
            else if(odd==1)
            {   
                printf("YES\n");
                printf("%d %d ",e[0], e[1]);
                printf("%d\n",o[0]);
            }
            else if(odd==2 && even>=2)
            {   
                printf("YES\n");        
                printf("%d %d ",e[0], e[1]);
                printf("%d\n",o[0]);
            }
            else printf("NO\n");



        }








    }
}