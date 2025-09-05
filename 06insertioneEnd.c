#include <stdio.h>
int main()
{
    int n, element;
    printf("size of an array = ");
    scanf("%d", &n);

    int arr[n + 1]; // extra space for insertion
    printf("enter elements of an array = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("inserting element at the end = ");
    scanf("%d", &element);
    arr[n] = element; // at the end
    n++; // increase size for insertion

    printf("after inserting output array is =");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}