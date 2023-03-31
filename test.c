#include<stdio.h>
#include<string.h>
 
int main()
{
    char s1[]="hello";
    char s2[101];
    scanf("%s",s2);
    int flag=0;
    int x=0;
 
    for(int i=0;s1[i]!='\0';i++)
    {
        for(int j=x;s2[j]!='\0';j++)
        {
           if(s1[i]==s2[j]) {flag++; x=j+1; break;}
        }
    }
 
    if(flag==5) printf("YES\n");
    else printf("NO\n");
 
    return 0;
}