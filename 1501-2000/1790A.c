#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    char pi[]= "314159265358979323846264338327";
    while (t--)
    {
       char s[31];
       scanf("%s",s);
       int l=strlen(s);
       int match=0;
       for (int i = 0; i < l; i++)
       {
            if(s[i]==pi[i])match++;
            else break;
       }
       printf("%d\n", match);
    
    }
}