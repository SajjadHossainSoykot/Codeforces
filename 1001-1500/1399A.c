#include<stdio.h>
void sort(int n, int* ptr)
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
        int flag=0,n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(n,a);
        for(int i=1; i<n; i++)
        {
            if(a[i]-a[i-1]>1)
            {
                flag=1;
                printf("NO\n");
                break;
            }
        }
        if(flag==0)printf("YES\n");
        
    }
}