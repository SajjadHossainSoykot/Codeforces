#include<stdio.h>
int main()
{
    int s, n;
    scanf("%d %d", &s, &n);
    int x[n], y[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }
    //sorting start
    for(int i=0; i<n-1; ++i){
        for (int j = 0; j<n-1; ++j){
            if(x[j]>x[j+1]){
                int tempx, tempy;
                tempx = x[j];
                tempy = y[j];
                x[j] =x[j+1];
                y[j] =y[j+1];
                x[j+1] = tempx;
                y[j+1] = tempy;
            }
        } 
    }
    //sorting end
    int health=s;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if(x[i]<health){health = health + y[i]; result++;}
        else {result=0; break;}
    }
    if(result==0)printf("NO\n");
    else printf("YES\n");
}