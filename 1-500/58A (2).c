#include<stdio.h>
#include<string.h>
int main()
{   
    char h[5] = "hello";
    char s[100];
    gets(s);
    int i, j, count = 0, b = 0;
    for (i = 0; h[i]!='\0'; i++)
    {
        for (j = b; s[j]!='\0'; j++)
        {
            if(h[i]==s[j])
            {
                count++;
                b = j + 1;
                break;
            }
        }
        
    }
    if (count==5)
    {
        printf("YES");
    }
    else printf("NO");
    

}