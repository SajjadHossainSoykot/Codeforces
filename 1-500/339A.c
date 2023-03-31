#include<stdio.h>
#include<string.h>
int main()
{   
    char s[100];
    scanf("%s", &s);
    int l = strlen(s);
    int temp;
    for (int i = 0; i < l; i=i+2)
    {
    
     for (int j = 0; j <=l-i-2; j+=2)
     {
        if (s[j]>s[j+2] && s[j+2]!=0 )
        {
            temp=s[j];
            s[j]=s[j+2];
            s[j+2]= temp;
        }
     }
        
    }
    printf("%s", s);
}