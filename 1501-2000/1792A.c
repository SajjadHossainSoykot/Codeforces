#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    //test case start
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int h[n], one=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &h[i]);
            if(h[i]==1) one++;
        }
        int ans = n- one/2;
        printf("%d\n",ans);
    }
}
