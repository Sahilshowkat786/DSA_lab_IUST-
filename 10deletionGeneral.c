#include <stdio.h>
int main()
{ // delete at anyplace
    int arr[100], position, n;
    printf("enter no of elements = ");
    scanf("%d", &n);
    printf("enter %d elements are ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter positon you want to delete(1 to %d) ", n);
    scanf("%d", &position);

    if (position < 1 || position > n)
    {
        printf("invalid position \n");
    }
    else
    {
        for (int i = position -1; i < n - 1; i++)   // index = pos -1
        {
            arr[i] = arr[i + 1];
        }
    }
    n--;
    printf("After delection output array is ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}