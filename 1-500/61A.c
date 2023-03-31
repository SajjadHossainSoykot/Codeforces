#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101], s2[101], s3[101];
    scanf("%s%s", &s1, &s2);
    int l = strlen(s1);
    s3[l]='\0';
    for (int i = 0; i < l; i++)
    {
        if(s1[i]==s2[i]) s3[i]='0';
        else s3[i]='1';
    }
    printf("%s", s3);
}