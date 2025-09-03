#include <stdio.h>
int main()
{
	// reverse an array
	// take size of array from user
	int n;
	printf("enter size of array  = ");
	scanf("%d", &n);
	int arr[n];
	// input array
	printf(" Enter %d elements  = ", n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	// reverse array

	printf(" Reversed array is = ");
	// int rarr[50];

	for (int i = n - 1; i >= 0; i--)
	{
		// rarr[i] = arr[n-i-1];

		printf("%d ", arr[i]);
	}

	return 0;
}
