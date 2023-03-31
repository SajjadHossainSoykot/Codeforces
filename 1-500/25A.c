#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], pos, e=0, o=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0) e++;
        else  o++;
    }

        if(e>o)
        {    
            for (int i = 0; i < n; i++)
            {
                if(a[i]%2!=0)
                {
                    pos = i+1;
                    printf("%d", i+1);
                    break;
                }   
            }
        }
        else 
        {    
            for (int i = 0; i < n; i++)
            {
                if(a[i]%2==0)
                {
                    pos = i+1;
                    printf("%d", i+1);
                    break;
                }   
            }
        }
    //printf("%d", pos);
}