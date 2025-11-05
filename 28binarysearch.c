// binarysearch code 
#include <stdio.h>
int binarysearch(int arr[], int n, int element)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (element == arr[mid])
            return mid;
        else if (element < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1; // not found element
}
int main()
{
    int arr[100];
    int n;
    printf("Enter no of elemets in array = ");
    scanf("%d", &n);
    printf("Enter elements (in sorted order) = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int element;
    printf("Enter element to be searched = ");
    scanf("%d", &element);
    int result = binarysearch(arr, n, element);
    if (result == -1)
        printf("Element not found in the array");
    else
        printf("The element %d is at index %d", element, result);
}