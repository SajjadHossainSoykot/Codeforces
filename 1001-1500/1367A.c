#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <=t; i++)
    {
        char b[101];
        scanf("%s", b);
        int n ;
        n = strlen(b);
        printf("%c", b[0]);
        for(int j=1; j<n-2; j=j+2)
        {
            printf("%c",b[j]);
        }
        printf("%c\n", b[n-1]);
    }
    
}