#include<stdio.h>
int main()
{
    int x[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &x[i]);
    }
    int max = x[0], k=0;
    for (int i = 1; i < 4; i++)
    {
        if(x[i]>max) 
        {
            max = x[i];
            k = i;
        }
    }
    for (int i = 3; i >= 0; i--)
    {
        if(i!=k)printf("%d ", max-x[i]);
    }
    
    
}