#include<stdio.h>
int main()
{
    int n, a, b, c;
    scanf("%d%d%d%d", &n, &a, &b, &c);
    int p[n+1];
    int x, y, z;
    for (int i = 0; i <=n i++)
    {
       
    }
    

}


int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int dp[n+1];
    dp[0]=0;
    int x,y,z;
    for(int i=1; i<=n; i++)
    {
        if(i>=a)
            x=dp[i-a];
        if(i>=b)
            y=dp[i-b];
        if(i>=c)
            z=dp[i-c];
        dp[i]=1+max(z,max(x,y));
    }
    cout<<dp[n];
}