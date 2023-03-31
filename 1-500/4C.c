#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char name[n][33];
    scanf("%s", &name[0]);
    printf("OK\n");
    for ( int i = 1; i < n; i++)
    {
        int match = -1;
        char ch = '1';
        scanf("%s", name[i]);
        for (int j = 0; i < j; j++)
        {
            if(strcmp(name[i],name[j])==0)
            {
                match = j;
                printf("Match = %d", match);
                break;
            }
        }
        // if(match!=-1)
            {
                name[i]==strcat(name[i],&ch);
                printf("%s", name[i]);
            }
        //else printf("OK\n");
    }
}