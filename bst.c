#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
} *root = NULL;

void Insert(int key)
{
    struct node *temp = root, *newnode, *follow = NULL;
    if (root == NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = key;
        newnode->lchild = newnode->rchild = NULL;
        root = newnode;
        return;
    }
    while (temp)
    {
        follow = temp;
        if (key < temp->data)
            temp = temp->lchild;
        else if (key > temp->data)
            temp = temp->rchild;
        else
            return;
    }
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = key;
    newnode->lchild = newnode->rchild = NULL;
    if (key < follow->data)
        follow->lchild = newnode;
    else
        follow->rchild = newnode;
}

void InOrder(struct node *temp)
{
    if (temp)
    {
        InOrder(temp->lchild);
        printf("%d -> ", temp->data);
        InOrder(temp->rchild);
    }
}

struct node *Search(int key)
{
    struct node *temp = root;
    while (temp)
    {
        if (key == temp->data)
            return temp;
        else if (key < temp->data)
            temp = temp->lchild;
        else
            temp = temp->rchild;
    }
    return NULL;
}

int Height(struct node *root)
{
    int x = 0, y = 0;
    if (!root)
        return 0;
    x = Height(root->lchild);
    y = Height(root->rchild);
    if (x > y)
        return x + 1;
    else
        return y + 1;
}

int Count(struct node *root)
{
    int x = 0, y = 0;
    if (!root)
        return 0;
    x = Height(root->lchild);
    y = Height(root->rchild);
    return x + y + 1;
}

void main()
{
    Insert(10);
    Insert(5);
    Insert(6);
    Insert(20);
    Insert(18);
    Insert(11);

    InOrder(root);

    printf("\n");
    struct node *temp = Search(22);
    if (temp)
        printf("Key %d is Found!", temp->data);
    else
        printf("Key is Not Found!");

    printf("\nHeight is %d.", Height(root));
    printf("\nCount is %d.", Count(root));
}
