#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int l = strlen(s);
    int a=0;
    for (int i = 0; i < l; i++)
    {
        if(s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='Y' || s[i]=='U' || s[i]=='I') a++;
        else if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='y' || s[i]=='u' || s[i]=='i') a++;
        else {printf(".");putchar(tolower(s[i]));}
    }
    
}