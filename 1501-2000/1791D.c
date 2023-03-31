#include<stdio.h>
#include<string.h>
int distinct(char* str);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int pos=0;
        int match = 0;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        for ( int i = 0; i < n; i++)
        {
            for (int  j = i; j < n; j++)
            {
                if(s[i]==s[j] && j!=n-1 && j!=i){pos=j; break;}
            }
            if(pos!=0)break;
        }
        if(pos==0)printf("%d\n", n);
        else
        {
            char s1[pos]; char s2[n-pos];
            s1[pos]='\0';
            s2[n-pos]='\0';
            for (int  i = 0; i < pos; i++)
            {
                s1[i]=s[i];
            }
            for (int  i = 0; i < n-pos; i++)
            {
                s2[i]=s[i+pos];
            }
            //printf("s1 = %s  s2 = %s\n", s1, s2);
            //printf("s1 dis = %d  s2 dis = %d\n", distinct(s1), distinct(s2));
            int result = distinct(s1) + distinct(s2);
            printf("%d\n", result);
        }
        
    }
}
int distinct(char* str) {

	int hash[128] = { 0 };
	int i, c = 0;
	for (i = 0; i < strlen(str); ++i) {
		hash[str[i]] = 1;
	}
	for (i = 0; i < 128; ++i) {
		c += hash[i];
	}
	return c;
}