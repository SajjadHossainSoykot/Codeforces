#include<stdio.h>
int main()
{
    int y;
    scanf("%d", &y);
    int ny=y+1;
    int k = 1;
    while(2)
    {
    ny = y+k;
    int count=0;
    int out[4];
    out[0]=ny/1000;
    ny=ny%1000;
    out[1]=ny/100;
    ny=ny%100;
    out[2]=ny/10;
    ny=ny%10;
    out[3]=ny;    
    for (int i = 0; i < 4; i++)
    {
        for(int j=0; j<4;j++)
        {
            if(j!=i && out[i]==out[j])count++;
        }
    } 
    if(count==0){printf("%d", y+k); break;}
    else k++;
    }
}