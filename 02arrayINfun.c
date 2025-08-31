// WAP to print (user input)array then display,find max and min element , search number using function

#include <stdio.h>
// display function
void printarray(int n, int arr[])
{
    printf("Output array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// max and min fun
void max_and_min(int n, int arr[])
{
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
}
// searching function
void search(int m, int n, int arr[])
{
    printf("Enter the number to be searched = ");
    scanf("%d", &m);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            printf("%d is present in array at index %d\n", m, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("%d not present in array\n", m);
}

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

    printarray(n, arr);

    printf("the max and min element in array\n");

    max_and_min(n, arr);

    printf("searching in array\n");

    search(m, n, arr);

    return 0;
}