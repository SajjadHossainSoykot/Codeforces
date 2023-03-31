#include<stdio.h>
int main()
{
long long int n, r; 
int e=0;
scanf("%lld", &n);
while(n>0)
{   
    r = n%10;
    if ((r==4 || r==7) && (r!=0))  
    {
        e++;
    } 
    n = n/10;
}
if ((e==4 || e==7) && (e!=0))printf("YES\n");
else printf("NO\n");
}