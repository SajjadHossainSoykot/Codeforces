#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                {
                   if(a[i]==b[j])
                   {
                        if(j>i){
                            count++;
                            }
                        break;
                   }
                   
                }
        }
        if(count>0 && a[0]==b[0])count++;
        if(count==1 && b[0]==a[n-1])count--;
        if(count==2 && b[0]==a[n-1])count--;

        printf("%d\n", count);


    }
}