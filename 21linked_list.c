#include <stdio.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

int main() {
    // Create nodes as normal variables
    struct Node node1, node2, node3;

    // Assign data
    node1.data = 10;
    node2.data = 20;
    node3.data = 30;

    // Link nodes
    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL; // last node

    // Head points to first node
    struct Node* head = &node1;

    // Traverse and print list
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

}
