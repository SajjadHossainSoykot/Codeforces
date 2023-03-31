#include<stdio.h>
int main ()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int f[m], a[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &f[i]);
        a[i] = f[i];
    }
    int diff=1001, ans=0;
    for(int i=0; i<m-1; ++i){
        for (int j = 0; j<m-1; ++j){
            if(a[j]>a[j+1]){
                int temp;
                temp = a[j];
                a[j] =a[j+1];
                a[j+1] = temp;
            }
        } 
    }
    for (int i = 0; i < m-n+1; i++)
    {
        if(a[i+n-1]-a[i]<diff) diff = a[i+n-1]-a[i];
    }
    printf("%d\n", diff);
    

}