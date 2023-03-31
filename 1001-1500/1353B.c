#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k;
        scanf("%d%d", &n, &k);
        int a[n], b[n];
        //Array Input
        for (int i = 0; i <n; i++)scanf("%d", &a[i]);
        for (int i = 0; i <n; i++)scanf("%d", &b[i]);
        //Sorting a Ascending
        for(int i=0; i<n-1; ++i){
        for (int j = 0; j<n-1; ++j){
            if(a[j]>a[j+1]){
                int temp;
                temp = a[j];
                a[j] =a[j+1];
                a[j+1] = temp;
                }
            }
        }
        //sorting b Descending
        for(int i=0; i<n-1; ++i){
        for (int j = 0; j<n-1; ++j){
            if(b[j]<b[j+1]){
                int temp;
                temp = b[j];
                b[j] =b[j+1];
                b[j+1] = temp;
                }
            } 
        }
        //Swaping
        for (int i = 0; i < k; i++)
        {
            if(a[i]<b[i]) a[i]= b[i];
        }
        //sum a
        int sum=0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        printf("%d\n", sum);
         
    }
}
