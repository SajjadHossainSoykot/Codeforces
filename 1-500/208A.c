#include<stdio.h>
#include<string.h>
int main()
{
    char a[201];
    scanf("%s",a);
    int n = strlen(a);
    int start = 0 ;
    for (int i = 0; i < n; i++)
    {
        if(a[i]=='W' && a[i+1] =='U' && a[i+2]=='B')
        {
            if(i!=0 && start!=0)printf(" ");
            i = i+2;
            start=0;
        }
        else{start++; printf("%c", a[i]);}
    }
    
}