#include<stdio.h>
void sort(int n, long* ptr)
{
	int i, j, t;
	// Sort the numbers using pointers
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
    int n; long l;
    scanf("%d%ld", &n, &l);
    long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
    }
    sort(n,a);
    long int diff = 0;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i+1]-a[i]>diff) diff = a[i+1]-a[i];
        }
    
    double d;
    d = (double) diff/2;
    if(a[0]>d) d = a[0];
    double z = l-a[n-1];
    if(z>d) d = l-a[n-1];
    printf("%.10lf",d);
}