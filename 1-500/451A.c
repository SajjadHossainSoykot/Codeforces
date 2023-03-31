#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int stick = n + m;
    int point = n*m;
    int i = 1;
    while (1)
    {  
        if(n-i==0)break;
        if(m-i==0)break;
        i++;
    }
    if(i%2!=0) printf("Akshat\n");
    else if(i%2==0) printf("Malvika\n");
}