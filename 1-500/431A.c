#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a[4];
    for (int i = 0; i <4; i++)
    {
        scanf("%d", &a[i]);
    }
    int n = pow(10,5);
    int sum = 0;
    char s[n];
    scanf("%s", s);
    int l = strlen(s);
    for (int i = 0; i<l; i++)
    {
        if(s[i]=='1') sum = sum+a[0];
        else if(s[i]=='2') sum = sum+a[1];
        else if(s[i]=='3') sum = sum+a[2];
        else if(s[i]=='4') sum = sum+a[3]; 
    }
    printf("%d\n", sum);
}