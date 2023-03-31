#include<stdio.h>
int swap(int *b, int *c);
int main()
{
    int a[10] = {10, 32, 38, 40, 15, 24, 17, 4, 3, 9};
    int i, j, n = 10, temp;

    printf("Before Sorting\n");
    for(i=0; i<n; ++i){
        printf("%d ", a[i]);
    }

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
    
    printf("\nAfter Sorting\n");
    for(i=0; i<n; ++i){
        printf("%d ", a[i]);
    }

}

int swap(int *b, int *c)
{
    int temp;
    temp = *b;
    *b = *c;
    *c =temp;
}