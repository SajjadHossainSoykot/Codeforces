#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int test=1; test<= t; test++)
    {
        int n, unmatched=0;
    scanf("%d", &n);
    long int a[n], b[n];
    for (int i = 0; i < n; i++){ scanf("%ld",&a[i]);}
    for (int i = 0; i < n; i++){ scanf("%ld",&b[i]);}
    for (int i = 0; i < n; i++)
    {
        if(b[i]>a[i]){unmatched++; break;}
    }
    int m;
    scanf("%d", &m);
    long int x[m];
    for (int i = 0; i < m; i++){ scanf("%ld",&x[i]);}
    int match = 0;
    for(int i=0; i<n;i++)
    {
        for ( int j=0; j<m; j++)
        {
            if (x[j]==a[i]-b[i])
            {
                match++; break;
            }
            
        }        
    }
    if(match==n){unmatched=0;}

    if (unmatched==0)
    {
        printf("YES\n");
    }
    else if (unmatched>0) printf("NO\n");
    }
}