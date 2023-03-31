#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int b;
        scanf("%d", &b);
        
        int a=0;
        int j = 1;
        while(a<b)
        {
            if((j%3!=0) && (j%10!=3))
            { 
                a++;
            }
            j++;
        }
        printf("%d\n", j-1);
    }    
}