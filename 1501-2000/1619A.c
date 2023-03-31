#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[101];
        scanf("%s", s);
        int len = strlen(s);
        int mid = len/2;
        //printf("len = %d\n", len);
        if(len%2!=0)printf("NO\n");
        else
        {
            int mismatch=0;
            for (int i = 0; i < mid; i++)
            {
                if(s[i]!=s[mid+i]){mismatch++; break;}
            }
            if(mismatch==0)printf("YES\n");
            else printf("NO\n");
        }
        
    }
}