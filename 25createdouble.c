#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *pre;
};

// Function to traverse in forward direction
void traverseOfDoublyLinkedList(struct node *head)
{
    printf("---- Traversing of doubly linked list in forward direction ---\n");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("data -> %d\n", temp->data);
        temp = temp->next;
    }
}

// Function to traverse in reverse direction
void reverseOfDLL(struct node *head)
{
    struct node *temp = head;

    // Move to the last node first
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    printf("---- Traversing of doubly linked list in reverse direction ---\n");
    while (temp != NULL)
    {
        printf("data -> %d\n", temp->data);
        temp = temp->pre;
    }
}

int main()
{
    struct node *head;
    struct node *node1, *node2, *node3, *node4;

    // Memory allocation
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));
    node4 = (struct node *)malloc(sizeof(struct node));

    // Head points to first node
    head = node1;

    // node1
    node1->data = 12;
    node1->next = node2;
    node1->pre = NULL;

    // node2
    node2->data = 34;
    node2->next = node3;
    node2->pre = node1;

    // node3
    node3->data = 56;
    node3->next = node4;
    node3->pre = node2;

    // node4
    node4->data = 78;
    node4->next = NULL;
    node4->pre = node3;

    // Function calls
    traverseOfDoublyLinkedList(head);
    printf("\nReverse order of doubly linked list:\n");
    reverseOfDLL(head);

    return 0;
}
