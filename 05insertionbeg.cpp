#include <stdio.h>
int main()
{
	int n;
	printf("size of an array = ");
	scanf("%d", &n);
	int arr[n + 1]; // one extra is for insertion
	printf("enter elements of an array ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	// insertion at the begining
	int element;
	printf("inserting element at the begining = ");
	scanf("%d", &element);

	for (int i = n; i > 0 ; i--)
	{
		arr[i] = arr[i - 1];
	}
		arr[0] = element;
		n++;
	

	// output array are
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
