#include <stdio.h>
#include <string.h>

// Insert substring into another string
void insertString(char mainStr[], char subStr[], int pos) {
    int lenMain = strlen(mainStr);
    int lenSub = strlen(subStr);

    for (int i = lenMain; i >= pos; i--) {
        mainStr[i + lenSub] = mainStr[i];
    }

    for (int i = 0; i < lenSub; i++) {
        mainStr[pos + i] = subStr[i];
    }
}

// Delete part of a string
void deleteString(char mainStr[], int pos, int len) {
    int i, n = strlen(mainStr);

    for (i = pos; i <= n - len; i++) {
        mainStr[i] = mainStr[i + len];
    }
}

int main() {
    char mainStr[200], subStr[100];
    int pos, len;

    printf("Enter main string: ");
   fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = 0; // remove newline

    printf("Enter string to insert: ");
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = 0;

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    insertString(mainStr, subStr, pos);
    printf("After Insert: %s\n", mainStr);

    printf("\nEnter position to delete: ");
    scanf("%d", &pos);
    printf("Enter length to delete: ");
    scanf("%d", &len);

    deleteString(mainStr, pos, len);
    printf("After Delete: %s\n", mainStr);

    return 0;
}
