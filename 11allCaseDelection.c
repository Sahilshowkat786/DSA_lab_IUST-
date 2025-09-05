#include <stdio.h>

// Function to display the array
void display(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to delete from beginning
int deleteBeginning(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty, cannot delete.\n");
        return n;
    }
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    printf("Deleted element from beginning.\n");
    return n - 1;
}

// Function to delete from end
int deleteEnd(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty, cannot delete.\n");
        return n;
    }
    printf("Deleted element from end: %d\n", arr[n - 1]);
    return n - 1;
}

// Function to delete from given position
int deleteAtPosition(int arr[], int n, int pos) {
    if (pos < 0 || pos >= n) {
        printf("Invalid position! (0 to %d)\n", n - 1);
        return n;
    }
    printf("Deleted element at position %d: %d\n", pos, arr[pos]);
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int main() {
    int arr[100], n, choice, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n--- Deletion Menu ---\n");
        printf("1. Delete from Beginning\n");
        printf("2. Delete from End\n");
        printf("3. Delete from Position\n");
        printf("4. Display Array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                n = deleteBeginning(arr, n);
                break;
            case 2:
                n = deleteEnd(arr, n);
                break;
            case 3:
                printf("Enter position (0-based index): ");
                scanf("%d", &pos);
                n = deleteAtPosition(arr, n, pos);
                break;
            case 4:
                display(arr, n);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
