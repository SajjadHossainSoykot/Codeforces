#include<stdio.h>
#include<string.h>
int main()
{
    char a[201];
    scanf("%s", a);
    int len=strlen(a);
    for (int i = 0; i < len; i++)
    {
        if(a[i]=='.'){printf("0");}
        if(a[i]=='-' && a[i+1]=='.')
        {
            printf("1");
            i = i+1;
        }
        if(a[i]=='-' && a[i+1]=='-')
        {
            printf("2");
            i = i+1;
        }
    }
}