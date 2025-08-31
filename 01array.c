// display array,max min and search
#include <stdio.h>

int main()
{
    int arr[50], n, m;

    printf("Enter size of array = ");
    scanf("%d", &n);
    // INPUT array
    printf("Input array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // display array
    printf("Output array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // find max and min element
    int maxE = arr[0];
    int minE = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxE)
            maxE = arr[i];
        if (arr[i] < minE)
            minE = arr[i];
    }

    printf("\nThe max element is %d\n", maxE);
    printf("The min element is %d\n", minE);

    // linear search
    printf("Enter the number to be searched = ");
    scanf("%d", &m);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            printf("%d is present in array at index %d\n", m, i);
            found = 1;
        }
    }

    if (!found)
        printf("%d not present in array\n", m);

    return 0;
}