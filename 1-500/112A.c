#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int va, vb, i;
    scanf("%s", a);
    scanf("%s", b);
    int l = strlen(a);
    for (i = 0; i < l; i++)
    {
        va = a[i];
        if(va>96) va = va-32;
        vb = b[i];
        if(vb>96) vb = vb-32;
        if(va<vb)
            {
                printf("-1");
                break;
            }
        if(va>vb)
            {
                printf("1");
                break;
            }
        
    }  
   if(va==vb)
            {
                printf("0");
            }
    return 0;
}