#include<stdio.h>
int main()
{
    int c, i, x=0;
    char a[4];
    scanf("%d", &c);
    for(i=0; i<c; i++)
    {
        scanf("%s", a);     
        if(a[1]=='+') x++;
        else if (a[1]=='-') x--;
    }
    
    printf("%d", x);
    return 0;    
}