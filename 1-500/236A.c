#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    gets(str);
    int hash[128] = {0};
    int i, c =0;
    for ( i = 0; i < strlen(str); i++)
    {
        hash[str[i]] = 1;
    }
    for (i = 0; i < 128; i++)
    {
        c += hash[i];
    }
    if(c%2==0)printf("CHAT WITH HER!");
    else if(c%2!=0)printf("IGNORE HIM!");
}