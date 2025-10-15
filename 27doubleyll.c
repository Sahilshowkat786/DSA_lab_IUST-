#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;
};

struct node *head = NULL; // global
// creation
void create()
{
    int n, data;
    printf("Enter NO of Nodes = ");
    scanf("%d", &n);
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data of node 1 = ");
    scanf("%d", &data);
    newnode->next = NULL;
    newnode->data = data;
    newnode->pre = NULL;
    // remember head
    head = newnode;
    temp = head;

    for (int i = 1; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data of node %d = ", i + 1);
        scanf("%d", &data);
        newnode->next = NULL;
        newnode->data = data;
        newnode->pre = temp;
        // logic
        temp->next = newnode;
        temp = newnode; // imp
    }
}
// traverse
void traverse()
{
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("data -> %d\t", temp->data);
        temp = temp->next;
    }

    printf("\n");
}
// insertion case 01
void insertionbeg()
{
    int data;
    struct node *newnode, *temp;
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data of you want to insert = ");
    scanf("%d", &data);

    newnode->pre = NULL;
    newnode->data = data;
    newnode->next = head;

    if(head != NULL) // important
    {
        head->pre = newnode;
    }
    head = newnode;
}
// case 02
void insertend()
{
    int data;
    struct node *newnode, *temp;
    temp = head;
    printf("Enter data of you want to insert = ");
    scanf("%d", &data);
    newnode = (struct node *)malloc(sizeof(struct node));
    while (temp->next != NULL) // important temp->next
    {
        temp = temp->next;
    }
    // logic
    newnode->pre = temp;
    temp->next = newnode;
    newnode->next = NULL;

    // data
    newnode->data = data;
}
// case 03
void insertanyplace()
{
    int data, pos;
    struct node *newnode, *temp, *P, *q;
    temp = head;

    printf("Enter data and position want to insert = ");
    scanf("%d%d", &data, &pos);
    newnode = (struct node *)malloc(sizeof(struct node));
    int i = 1;
    while (i != pos - 1 && temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    if (temp == NULL)
    {
        printf("There are less than %d elements\n", pos);
        return;
    }

    q = temp->next;
    // logic
    newnode->next = temp->next;
    q->pre = newnode;
    newnode->pre = temp;
    temp->next = newnode;

    // data
    newnode->data = data;
}
// delection: case 01
void deletebeg()
{
    struct node *newnode, *temp;
    temp = head;
    if(head == NULL) // important
    {
        printf("List is empty\n");
        return;
    }
    head = head->next;
    if(head != NULL) // important
    {
        head->pre = NULL;
    }
    free(temp);
}
// case 02
void deletend()
{
    struct node *newnode, *temp, *ptr; // ptr = previous node
    temp = head;

    if (head == NULL) // case 1: empty list
    {
        printf("List is empty\n");
        return;
    }

    while (temp->next != NULL)  // traverse till last node
    {
        ptr = temp;              // store current as previous
        temp = temp->next;       // move to next
    }

    // now temp = last node, ptr = second last node
    ptr->next = NULL;            // disconnect last node
    free(temp);                  // free memory of last node
}

// case 03
void deleteatanyplace()
{
    int pos;
    struct node *newnode, *temp, *q, *p;
    temp = head;

    printf("Enter  position want to delete = ");
    scanf("%d", &pos);
    int i = 1;
    while (i != pos - 1 && temp != NULL)
    {
        temp = temp->next;
        i++;
    }
   
    // *temp ,*p, *q
    p = temp->next;
    q = p->next;
    // logic
    temp->next = p->next;
    q->pre = temp;
    free(p);
}
int main()
{
    int choice;
    do
    {
        printf("\n--- Doubley Linked List Menu ---\n");
        printf("1. Create list \n");
        printf("2. Traverse\n");
        printf("3. Insert at beginning\n");
        printf("4. Insert at end\n");
        printf("5. Insert at position\n");
        printf("6. Delete from beginning\n");
        printf("7. Delete from end\n");
        printf("8. Delete from position\n");
        printf("9. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            traverse();
            break;
        case 3:
            insertionbeg();
            break;
        case 4:
            insertend();
            break;
        case 5:
            insertanyplace();
            break;
        case 6:
            deletebeg();
            break;
        case 7:
            deletend();
            break;
        case 8:
            deleteatanyplace();
            break;
        case 9:
            printf("exit program\n");
            return 0 ;
        default:
            printf("enter valid option\n");
        }
    } while (choice != 9);

}
