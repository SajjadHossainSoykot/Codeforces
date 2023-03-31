#include<stdio.h>
#include<string.h>
int main()
{
    char g[101], h[101], p[201];
    scanf("%s%s%s", g, h, p);
    int gl = strlen(g), hl = strlen(h), pl = strlen(p);
    if(gl+hl==pl)
    {
        int i;
    //joining in g h in a
    char a[201];
    a[gl+hl]='\0'; 
    for (int i = 0; i < gl; i++)
    {
        a[i] = g[i];
    }
    for (int i = gl; i < gl+hl; i++)
    {
        a[i] = h[i-gl];
    }
    // //sort a
    for(int i=0; i<gl+hl-1; ++i){
        for (int j = 0; j<gl+hl-1; ++j){
            if(a[j]>a[j+1]){
                int temp;
                temp = a[j];
                a[j] =a[j+1];
                a[j+1] = temp;
            }
        } 
    }
    //sort p;
    for(int i=0; i<pl-1; ++i){
        for (int j = 0; j<pl-1; ++j){
            if(p[j]>p[j+1]){
                int temp;
                temp = p[j];
                p[j] =p[j+1];
                p[j+1] = temp;
            }
        } 
    }
    //output
    if(strcmp(a,p)==0)printf("YES\n");
    else printf("NO\n");
    }
    else printf("NO\n");
}