#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n][11];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", &s[i]);
    }
    int a=0, b=0;
    if(n==1)printf("%s\n", s[0]);
    else 
    {   
        char team1[11], team2[11];
        strcpy(team1,s[0]);
        for (int i = 1; i < n; i++)
        {
            if(strcmp(team1, s[i])!=0) {strcpy(team2,s[i]); break;}
        }
        for (int i = 0; i < n; i++)
        {
            if(strcmp(team1, s[i])==0) a++;
            else b++;
        }
        if(a>b) printf("%s\n", team1);
        else printf("%s\n", team2);
    }

}