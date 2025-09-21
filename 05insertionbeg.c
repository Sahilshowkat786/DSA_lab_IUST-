#include <stdio.h>
// insertion at the begining of an array
int main()
{
	int n; // size of an array
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

	// shifting elements to right

	for (int i = n; i > 0 ; i--)
	{
		arr[i] = arr[i - 1];
	}
	// inserting element at index 0
		arr[0] = element;
		n++;
	

	// output array are
	printf("array after insertion = ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
