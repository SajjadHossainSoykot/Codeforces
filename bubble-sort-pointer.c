#include <stdio.h>

// Function to sort the numbers using pointers
void sort(int n, int *ptr)
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

// Driver code
int main()
{
	int n = 5;
	int arr[] = { 0, 23, 14, 12, 9 };

	sort(n, arr);
    // print the numbers
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
