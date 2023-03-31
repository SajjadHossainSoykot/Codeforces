#include<stdio.h>
int main()
{
    int n, p, q;
    scanf("%d", &n);
    int a[200];
    scanf("%d", &p);
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &q);
    for (int i = p; i < p+q; i++)
    {
        scanf("%d", &a[i]);
    }
    int match=0;
    //sort
    for(int i=0; i<p+q-1; ++i){
        for (int j = 0; j<p+q-1; ++j){
            if(a[j]>a[j+1]){
                int temp;
                temp = a[j];
                a[j] =a[j+1];
                a[j+1] = temp;
            }
        } 
    }
    //check

        for (int i = 0; i <p+q; i++)
           {
                if(a[i]!=a[i+1]){match++;}
           }
    //printf("%d", match);
    if(match==n) printf("I become the guy.\n");
    else printf("Oh, my keyboard!\n"); 
}