#include<stdio.h>
int main(){
    int n, i, sum =0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        int a, b, c;
        scanf("%d", &a);
        printf(" ");
        scanf("%d", &b);
        printf(" ");
        scanf("%d", &c);
        printf("\n");
        if((a+b+c)>=2){
            sum++;
        }

    }
    printf("%d", sum);
    return 0;
    
}