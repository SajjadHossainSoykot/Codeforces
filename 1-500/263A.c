#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, a[5][5];
    int row, col, mov;
    for (i = 0; i <5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
            
        }
        //printf("\n");
    }
    for (i = 0; i <5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if(a[i][j]==1) 
                {
                    row = i;
                    col = j;
                }
            
        }
    }
    
    mov = abs(row-2) + abs(col-2);
    printf("%d", mov);

    return 0;
}
