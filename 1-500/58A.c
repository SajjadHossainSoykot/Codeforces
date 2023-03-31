#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char h[5] = "hello";
    scanf("%s", s);
    int sl= strlen(s);

    int i, j, count = 0, b = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = b; j < sl; j++)
        {
            if (s[j]==h[i])
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