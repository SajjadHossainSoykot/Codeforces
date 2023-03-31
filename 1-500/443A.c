#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^\n]s", &s);
    int l =strlen(s);
    //printf("%d", l);
    int n = l/3;
    char a[n];
    a[n]='\0';
    int j=0;
    for (int i = 1; i <l-1; i=i+3)
    {
       a[j]=s[i];
       j++;
    }
    int alpha[26]={0};
    for (int i = 97; i <=122; i++)
    {
        for(int j=0; j<n;j++)
        {
            if (a[j]==i)
            {
                alpha[i-97]=1;
                break;
            }
            
        }
    }
    int sum =0;
    for (int i = 0; i < 26; i++)
    {
        sum = sum + alpha[i];
    } 
    printf("%d\n",sum);
}