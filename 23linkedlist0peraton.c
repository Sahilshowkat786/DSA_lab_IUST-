#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
// create list
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

void traverse(struct node *head)
{
    printf("\n--Traverse of linked list--\n");
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct node *insertbeg(struct node *head, int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = head;
    head = newnode;
    return head;
}
// insert at end
struct node *insertend(struct node *head, int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp;

    newnode->data = x;
    newnode->next = NULL;
    if (head == NULL)
    {
        return newnode;
    }
    temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;

    return head;
}
struct node *insertpos(struct node *head, int x, int pos)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    newnode->data = x;
    temp = head;
    int i = 1;
    while (i != pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
// delete
struct node *deletebeg(struct node *head)
{
    struct node *temp;
    temp = head;
    head = head->next;
    free(temp);
    return head;
}
struct node *deleteEnd(struct node *head)
{
    struct node *temp;
    struct node *tempnext;
    temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

int main()
{
    int n;
    struct node *head = NULL;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    head = create(n);
    traverse(head);

    // head = insertbeg(head, 10);
    // printf("\nAfter insertion at beginning:\n");
    // traverse(head);
    head = insertend(head, 10);
    printf("\nAfter insertion at end:\n");
    traverse(head);
    head = insertpos(head, 56, 3);
    printf("\nAfter insertion at place: \n ");
    traverse(head);
    head = deletebeg(head);
    printf("\nAfter deleting ist node : \n");
    traverse(head);
    head = deleteEnd(head);
    printf("\nAfter deleting end node : \n");
    traverse(head);
    return 0;
}
