#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Create linked list
struct node *create(int n)
{
    struct node *head = NULL, *temp, *newnode;
    int data;

    if (n == 0)
    {
        printf("Linked list is empty\n");
        return NULL;
    }

    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data of node 1: ");
    scanf("%d", &data);
    newnode->data = data;
    newnode->next = NULL;
    head = temp = newnode;

    for (int i = 1; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data of node %d: ", i + 1);
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }

    return head;
}

// Traverse linked list
void traverse(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    printf("\nLinked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insert at beginning
struct node *insertbeg(struct node *head, int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = head;
    head = newnode;
    return head;
}

// Insert at end
struct node *insertend(struct node *head, int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;

    if (head == NULL)
        return newnode;

    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
    return head;
}

// Insert at position
struct node *insertpos(struct node *head, int x, int pos)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;

    if (pos == 1)
    {
        newnode->next = head;
        return newnode;
    }

    struct node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("Invalid position!\n");
        free(newnode);
        return head;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

// Delete from beginning
struct node *deletebeg(struct node *head)
{
    if (head == NULL)
    {
        printf("List already empty!\n");
        return NULL;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Delete from end
struct node *deleteEnd(struct node *head)
{
    if (head == NULL)
    {
        printf("List already empty!\n");
        return NULL;
    }

    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }

    struct node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;

    free(temp->next);
    temp->next = NULL;
    return head;
}

// Delete at position
struct node *deletepos(struct node *head, int pos)
{
    if (head == NULL)
    {
        printf("List is empty!\n");
        return NULL;
    }

    if (pos == 1)
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL)
    {
        printf("Invalid position!\n");
        return head;
    }

    struct node *del = temp->next;
    temp->next = del->next;
    free(del);
    return head;
}


// MAIN FUNCTION (Menu)
int main()
{
    struct node *head = NULL;
    int choice, n, data, pos;

    printf("Enter number of initial nodes: ");
    scanf("%d", &n);
    head = create(n);

    do
    {
        printf("\n--- Linked List Menu ---\n");
        printf("1. Traverse\n");
        printf("2. Insert at beginning\n");
        printf("3. Insert at end\n");
        printf("4. Insert at position\n");
        printf("5. Delete from beginning\n");
        printf("6. Delete from end\n");
        printf("7. Delete from position\n");
        printf("8. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            traverse(head);
            break;

        case 2:
            printf("Enter data to insert at beginning: ");
            scanf("%d", &data);
            head = insertbeg(head, data);
            break;

        case 3:
            printf("Enter data to insert at end: ");
            scanf("%d", &data);
            head = insertend(head, data);
            break;

        case 4:
            printf("Enter data and position: ");
            scanf("%d %d", &data, &pos);
            head = insertpos(head, data, pos);
            break;

        case 5:
            head = deletebeg(head);
            break;

        case 6:
            head = deleteEnd(head);
            break;

        case 7:
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            head = deletepos(head, pos);
            break;

        case 8:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
        }
    } while (choice != 8);

    return 0;
}
