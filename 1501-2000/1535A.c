#include<stdio.h>
void sort(int n, int *ptr)
{
	int i, j, t;
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (*(ptr + j) < *(ptr + i)) {
				t = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = t;
			}
		}
	}	
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int s[4], a[4];
        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &s[i]);
            a[i] = s[i];
        }
        sort(4,a);
        if((a[2]==s[0] || a[2]==s[1]) && (a[3]==s[2] || a[3]==s[3]))printf("YES\n");
        else if((a[3]==s[0] || a[3]==s[1]) && (a[2]==s[2] || a[2]==s[3]))printf("YES\n");
        else printf("NO\n");
    }
}