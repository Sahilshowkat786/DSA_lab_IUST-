#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *header; // global header

void createlist(int n)
{
    struct node *temp, *newnode;
    int data, i;
    header = NULL;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("unable to allocate memory");
        return;
    }

    else
    {
        printf("Enter data of node 1 = ");
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = NULL;
        header = newnode;
        temp = newnode;
        for (i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("unable to allocate memory");
                break;
            }

            printf("Enter data of node %d = ", i);
            scanf("%d", &data);
            newnode->data = data;
            newnode->next = NULL;

            temp->next = newnode;
            temp = temp->next;
        }
    }
    printf("\n");
}

void traverselist()
{
    struct node *temp;
    temp = header;
    printf("\nTraversing of a linked list is : ");
    while (temp != NULL)
    {
        printf("\ndata = %d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter no of nodes = ");
    scanf("%d", &n);
    createlist(n);
    traverselist();
    return 0;
}