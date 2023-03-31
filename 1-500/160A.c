#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], sum=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    //sorting
    for(int i=0; i<n-1; ++i){
        for (int j = 0; j<n-1; ++j){
            if(a[j]<a[j+1]){
                int temp;
                temp = a[j];
                a[j] =a[j+1];
                a[j+1] = temp;
            }
        } 
    }
    int sum2=0, count=0;
    for (int i = 0; i < n; i++)
    {
        sum2 = sum2 + a[i];
        count = i+1;
        if(sum2>sum/2)break;
    }
    printf("%d", count);
}