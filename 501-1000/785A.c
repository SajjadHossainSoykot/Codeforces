#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        char s[100];
        int a;
        scanf("%s",s);
        if(s[0]=='T') a = 4;
        else if(s[0]=='C') a = 6;
        else if(s[0]=='O') a = 8;
        else if(s[0]=='D') a = 12;
        else if(s[0]=='I') a = 20;;
        sum = sum + a;
    }
    printf("%ld\n", sum);
}