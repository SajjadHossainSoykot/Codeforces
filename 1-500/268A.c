#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int team[n][2];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &team[i][0],&team[i][1]);
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i!=j && team[i][0]==team[j][1]) count++;
        }
        
    }
    printf("%d",count);
}