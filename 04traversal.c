#include <stdio.h>

// Function to traverse and print array elements
void traverseArray(int arr[], int n) {
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    // Calling traversal function
    traverseArray(arr, n);

    return 0;
}
