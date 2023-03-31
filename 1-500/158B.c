#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s[n], g1=0, g2=0, g3=0, g4=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
        if(s[i]==1)g1++;
        else if(s[i]==2)g2++;
        else if(s[i]==3)g3++;
        else if(s[i]==4)g4++;
    }
    //printf("Before g1=%d g2=%d g3=%d g4=%d\n", g1, g2, g3, g4);
    int taxi;
    if(g1==g3) g1 = 0;
    else if(g1<g3) {g1 = 0;}
    else if (g1>g3) {g1 = g1 - g3;}
    if(g2%2==0){g2 = g2/2;}
    else if(g2%2!=0)
        {   g2 = g2/2 + 1; 
            if(g1>=2)g1=g1-2;
            else if(g1==1)g1=0;
        }
    if(g1<=4 && g1!=0)g1=1;
    else if(g1%4==0) g1 = g1/4;
    else if(g1%4!=0) g1 = g1/4 + 1;
    //printf("After g1=%d g2=%d g3=%d g4=%d\n", g1, g2, g3, g4);
    taxi = g4 + g3 + g2 + g1;
    
    printf("%d\n", taxi); 

}