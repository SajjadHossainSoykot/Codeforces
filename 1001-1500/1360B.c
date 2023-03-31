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
        int n;
        scanf("%d", &n);
        int s[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &s[i]);
        }
        sort(n,s);
        int min= s[n-1]-s[0];
        for (int i = 0; i < n-1; i++)
        {
            if(s[i+1]-s[i]<min) min = s[i+1]-s[i];
        }
        printf("%d\n", min);
        
    }
}