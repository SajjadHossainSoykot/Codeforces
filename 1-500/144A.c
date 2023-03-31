#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    //height input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    //min and max
    int minPOS=0, maxPOS=0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[maxPOS]<a[i+1])
        {
            maxPOS=i+1;
        }
        if (a[minPOS]>=a[i+1])
        {
            minPOS=i+1;
        }
    }
    int t;
    if(maxPOS>minPOS) t = (maxPOS-0)+(n-minPOS-2);
    else t = (maxPOS-0)+(n-minPOS-1);

    printf("%d\n", t);
    
}