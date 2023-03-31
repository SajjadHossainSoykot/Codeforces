#include<stdio.h>
#include<math.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    if(n>=0)printf("%ld\n", n);
    else{
            long int a, b, x, y, ans, save = n;
            a = n%10;
            x = n/10;
            b = x%10;
            y = (x-b)+a;
            if(x>=y)
            {
                printf("%ld\n",x); 
            }
            else if(x<y)
            {
                printf("%ld\n", y); 
            }
        
    }
}
