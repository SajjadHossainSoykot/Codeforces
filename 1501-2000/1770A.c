#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    //test case
    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d%d",&n, &m );
        long long int a[n], b[m];
        //data input
        for(int j=0;j<n;j++)
        {
            scanf("%d", &a[j]);
        } 
        for(int j=0;j<m;j++)
        {
            scanf("%d", &b[j]);
        }
        
        
        //sorting
        for(int k=0; k<(m+n-1); ++k)
        {
            for (int j = 0; j<(m+n-1); ++j)
            {
                if(a[j]<a[j+1])
                {
                    int temp;
                    temp = a[j];
                    a[j] =a[j+1];
                    a[j+1] = temp;
                }
            } 
        }
        //sum
        int sum = 0;
        for(int j=0; j<n; j++)
        {
            sum = sum + a[j];
        }
        printf("%d", sum);
    }
    
}