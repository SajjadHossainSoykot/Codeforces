#include <stdio.h>
#include<ctype.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", s);
    int l = strlen(s);
    int L=0, U=0;
    for(int i = 1; i < l; i++)
    {
        if(islower(s[i]))
        {
            L++;
        }
    }
    for(int i = 0; i < l; i++)
    {
        if(isupper(s[i]))
        {
            U++;
        }
    }
    if(islower(s[0]) && L==0)
    {
        s[0] = toupper(s[0]);
        for(int i = 1; i < l; i++)
        {
            s[i] = tolower(s[i]);
        }
        printf("%s", s);
        return 0;
    }
    if(U==l)
    {
        for(int i=0; i<l; i++)
        {
            s[i]=tolower(s[i]);
        }
        printf("%s", s);
    }
    else
    {
        printf("%s", s);
    }    
    return 0;
}
