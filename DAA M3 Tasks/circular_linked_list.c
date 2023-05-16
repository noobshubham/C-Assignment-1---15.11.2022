#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head = NULL;

void Display(struct node *root)
{
    if (root == NULL)
    {
        printf("\nNothing to ShowUP! Fallback!\n\n");
        return;
    }
    struct node *temp = root;
    printf("\n");
    while (temp->next != root)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("%d\n\n", temp->data);
}

void Insert(int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    if (head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = newnode;
        newnode->next = head;
    }
    printf("\nNew node %d has been added!\n\n", newnode->data);
}

void Delete(int key)
{
    struct node *temp, *follow = NULL;
    if (head == NULL)
        return;
    if (head->data == key && head->next == head)
    {
        printf("\nDeleted the Node %d.\n\n", head->data);
        free(head);
        head = NULL;
    }
    else if (head->data == key)
    {
        temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = head->next;
        temp = head;
        head = head->next;
        printf("\nDeleted the Node %d.\n\n", temp->data);
        free(temp);
    }
    else
    {
        temp = head;
        do
        {

            if (temp->data == key)
            {
                follow->next = temp->next;
                printf("\nDeleted the Node %d.\n\n", temp->data);
                free(temp);
                break;
            }
            else
            {
                follow = temp;
                temp = temp->next;
            }

        } while (temp != head);
        if (temp == head)
            printf("\nElement %d Not Found!\n\n", key);
    }
}

void main()
{
    int choice, val;
    while (1)
    {
        printf("Enter Your Choice of Operation\n1. Insert\n2. Display\n3. Delete\n-> ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the Value to Insert: ");
            scanf("%d", &val);
            Insert(val);
            break;

        case 2:
            Display(head);
            break;
        case 3:
            printf("Enter the Key to Delete: ");
            scanf("%d", &val);
            Delete(val);
            break;
            ;
        default:
            exit(0);
            break;
        }
    }
}
