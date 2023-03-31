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
    int n , m;
    scanf("%d%d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort(n,a);
    int sum=0;
    for(int i=0; i<m; i++)
    {
        sum+=a[i];
        if(sum>sum-a[i]){sum-=a[i]; break;}
    }
    sum = sum*(-1);
    printf("%d\n", sum);
}