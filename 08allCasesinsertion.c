#include <stdio.h>

// Function to display array
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert at beginning
void insertAtBeginning(int arr[], int *n, int element) {
    for (int i = *n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
    (*n)++;
}

// Function to insert at end
void insertAtEnd(int arr[], int *n, int element) {
    arr[*n] = element;
    (*n)++;
}

// Function to insert at any position (0-based index)
void insertAtPosition(int arr[], int *n, int element, int pos) {
    if (pos < 0 || pos > *n) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    (*n)++;
}

// Function to insert at middle
void insertAtMiddle(int arr[], int *n, int element) {
    int pos = (*n) / 2;  // middle index
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    (*n)++;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[100]; // fixed max size for simplicity
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int choice, element, pos;

    do {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Position\n");
        printf("4. Insert at Middle\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element: ");
                scanf("%d", &element);
                insertAtBeginning(arr, &n, element);
                break;
            case 2:
                printf("Enter element: ");
                scanf("%d", &element);
                insertAtEnd(arr, &n, element);
                break;
            case 3:
                printf("Enter element: ");
                scanf("%d", &element);
                printf("Enter position (0-based index): ");
                scanf("%d", &pos);
                insertAtPosition(arr, &n, element, pos);
                break;
            case 4:
                printf("Enter element: ");
                scanf("%d", &element);
                insertAtMiddle(arr, &n, element);
                break;
            case 5:
                printf("Array: ");
                display(arr, n);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}
