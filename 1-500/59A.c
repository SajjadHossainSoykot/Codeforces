#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    int u = 0,l = 0,i;
    for (i = 0; i < strlen(a); i++)
    {
        if(a[i]<97) u++;
        else if(a[i]>96) l++; 
    }
    if(u>l)
    {
        for(i=0; a[i]!='\0'; i++){
            if(a[i]>='a' && a[i]<='z')
            {
                a[i] = a[i] - 32;
            }
        }
    }
    else 
    {
        for(i=0; a[i]!='\0'; i++){
            if(a[i]>='A' && a[i]<='Z')
            {
                a[i] = a[i] + 32;
            }
        }
    }
    printf("%s", a);
}

 