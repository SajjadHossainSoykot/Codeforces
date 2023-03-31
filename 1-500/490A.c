#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t[n];
    int p=0, m=0, s=0;
    int a[n], b[n], c[n];
    int i;
    for(i = 0; i<n ; i++)
    {
       scanf("%d", &t[i]);
        if(t[i]==1){a[p]=i+1; p++;}
        else if(t[i]==2){b[m]=i+1; m++;}
        else if(t[i]==3){c[s]=i+1; s++;}
    }
    int min = (p<m && p<s)?p:((m<s)?m:s);
    if(min==0)printf("0\n");
    else 
    {
    printf("%d\n", min);
    for(int i= 0; i<min; i++)
    {
    printf("%d %d %d\n", a[i], b[i], c[i]);
    }
    }
   
}