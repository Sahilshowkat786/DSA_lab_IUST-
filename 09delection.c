#include <stdio.h>
int main()
{
    int arr[100], n;
    printf("enter no of elements = ");
    scanf("%d", &n);
    printf("enter %d elements ", n);
    // input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--; // after delete size redues
    printf("after deletion of first element output array is = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("after deletion of last element output array is = ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}