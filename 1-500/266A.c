#include<stdio.h>
int main()
{
    int n, count=0;
    scanf("%d", &n);
    char a[50];
    scanf("%s", a);
    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]==a[i+1]) count++;
    }
    printf("%d", count);
}