#include <stdio.h>
int main()
{
    // insertion at the anyplace
    int n, element, position;
    printf("enter no of elements  = ");
    scanf("%d", &n);

    int arr[n + 1]; // extra space for insertion
    printf("enter elements of an array = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("position of inserton (1 to %d) = ", n + 1);
    scanf("%d", &position);

    printf("inserting element = ");
    scanf("%d", &element);

    printf("after inserting output array is =");
    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element;
    n++;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}