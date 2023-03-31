#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]>0) count++;
    }
    if (count>0)
    {
        printf("HARD\n");
    }
    else printf("EASY\n");

}