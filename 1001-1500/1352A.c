#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for ( int i = 1; i <=t; i++)
    {
    int n;
        scanf("%d", &n);
        int  term=1;
        if(n<=10){printf("1\n%d\n", n);}
        else
        {
            int s = n;
            int j=1;
            //for(int j=1; n>10;j++)
            while(1)
            {   
                int x;
                //y = 10; // (pow(10,j));
                x = n%10;
                if(x!=0) term++;
                n = n/10;
                j++;
                if(n<10)break;
            }
            printf("%d\n", term);
            int f = s;
            //printf("Number %d\n", f);
            int y = 1, b=1;
            for(int k = 1; k<=j; k++)
            {
                int x = s%10;
                
                if(x!=0) 
                {   
                    int a =x*pow(10,k);
                    if(a%10==0) printf("%d ",a/10);
                    else printf("%d ",(a+1)/10);
                }
                int y = y*10;//pow(10,k);
                s = s/10;
                
            }
            printf("\n");
        }
    }
}