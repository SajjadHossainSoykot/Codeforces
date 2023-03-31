#include<stdio.h>
int main()
{
    long long int S[4], c=0, a=0;
    int n=4, i, j;
    for (int i = 0; i < 4; i++)
    {
        scanf("%lld", &S[i]);
    }
    //sort
        for(i=0; i<n-1; ++i){
        for (j = 0; j<n-1; ++j){
            if(S[j]>S[j+1]){
                int temp;
                temp = S[j];
                S[j] =S[j+1];
                S[j+1] = temp;
            }
        } 
    }
        for (i = 0; i < 4; i++)
        {
        if(S[i]==S[i+1]) c++;
        }
    printf("%lld\n", c);

}