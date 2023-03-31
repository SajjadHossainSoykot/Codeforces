#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int i, j;
    for (i = 1; i <=n ; i++)
    {
        if(i%2!=0)
        {
            for(j=1; j<=m; j++)
            {
            printf("#");
            }
            
        }
        else
        {
            if(i%2==0 && i%4!=0)
            {
                for(j=1; j<m; j++)
                {
                    printf(".");
                }
                printf("#");
            }
            else if(i%4==0)
            {
                printf("#");
                for(j=1; j<m; j++)
                {
                    printf(".");
                }
            }
        }

        printf("\n");
    }
    
}