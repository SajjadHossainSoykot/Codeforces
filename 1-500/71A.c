#include<stdio.h>
#include<string.h>
int main()
{
    int c, i;
    char name[100];
    scanf("%d", &c);
    for ( i = 1; i <= c; i++)
    {
        scanf("%s", name);
        //gets(name);
        int l = strlen(name);
        if(l<=10)
        {
            printf("%s\n", name);
        }
        else
        {
            printf("%c%d%c\n", name[0],l-2, name[l-1]);
        }
    }
    return 0;    
}