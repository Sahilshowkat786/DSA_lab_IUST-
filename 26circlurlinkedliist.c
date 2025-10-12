#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void traverse(struct node *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("\n----- Traverse of Circular Linked List -----\n");
    struct node *temp = head;

    do {
        printf("%d  ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("\n");
}

int main() {
    struct node *head = NULL, *newnode, *temp;
    int n, data;

    printf("Enter number of nodes = ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of nodes.\n");
        return 0;
    }

    // Create first node
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Unable to allocate memory.\n");
        return 0;
    }

    printf("Enter data of node 1 = ");
    scanf("%d", &data);
    newnode->data = data;
    newnode->next = newnode;  // initially circular (points to itself)
    head = newnode;
    temp = head;

    // Create remaining nodes
    for (int i = 2; i <= n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("Unable to allocate memory.\n");
            return 0;
        }

        printf("Enter data of node %d = ", i);
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = head;    // new node points to head
        temp->next = newnode;    // last node links to new one
        temp = newnode;          // move temp to new last node
    }

    // Traverse list
    traverse(head);

    return 0;
}
