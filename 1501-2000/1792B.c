#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long int a[4];
        scanf("%ld%ld%ld%ld", &a[0], &a[1],&a[2],&a[3]);
        int total = a[0] + a[1]+a[2]+a[3];
        int alice=0, bob=0, count=0;
        
            count = a[0];
            alice = a[0]; bob=a[0];
            total = total - a[0];
          
                    for (int i = 0; i < a[1]; i++)
                    { 
                        count++;
                        alice++;
                        bob--;
                        total--;
                        if ((bob==0 || alice==0) || total==0) break;
                    }                
                    for (int i = 0; i < a[2]; i++)
                    { 
                        count++;
                        alice++;
                        bob--;
                        total--;
                        if ((bob==0 || alice==0) || total==0) break;
                    }
                    if(a[1]!=a[2])count++;
                    for (int i = 0; i < a[3]; i++)
                    {
                        if ((bob<0 || alice<0) || total==0) break;
                        count++;
                        bob--;
                        alice--;
                        total--;
                    }
                    if(a[0]==0) count=1;
                    if((a[1]==0||a[2]==0) && a[3]!=0) count = a[0]*2+1; 
            printf("%d\n", count);

    }
        
        

}