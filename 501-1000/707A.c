#include<stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    char s[n][m];
    int bw=0;
    for (int i = 0; i < n; i++)
    {
        for(int j= 0; j<m; j++)
        {   
            scanf(" %c", &s[i][j]);
            if(s[i][j]=='B' || s[i][j]=='W' || s[i][j]=='G')bw++;
        }
    }
    if(bw==n*m)printf("#Black&White\n");
    else printf("#Color\n");
}