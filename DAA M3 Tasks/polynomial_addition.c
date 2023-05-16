#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coefficient;
    int exponent;
    int length;
    struct node *next;
} *first = NULL, *second = NULL, *result = NULL;

void MakeCircular(struct node *head)
{
    int count = 0;
    struct node *temp = head;
    while (temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    temp->next = head;
    head->length = count + 1;
}

void AdditionPolynomial()
{
    if (first != NULL && second != NULL)
    {
        struct node *temp, *tempf = first, *temps = second, *newnode;
        while (tempf != NULL && temps != NULL)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (tempf->exponent == temps->exponent)
            {
                newnode->coefficient = tempf->coefficient + temps->coefficient;
                newnode->exponent = tempf->exponent;
                newnode->next = NULL;
                tempf = tempf->next;
                temps = temps->next;
            }
            else if (tempf->exponent > temps->exponent)
            {
                newnode->coefficient = tempf->coefficient;
                newnode->exponent = tempf->exponent;
                newnode->next = NULL;
                tempf = tempf->next;
            }
            else
            {
                newnode->coefficient = temps->coefficient;
                newnode->exponent = temps->exponent;
                newnode->next = NULL;
                temps = temps->next;
            }
            if (result == NULL)
                result = newnode;
            else
            {
                temp = result;
                while (temp->next != NULL)
                    temp = temp->next;
                temp->next = newnode;
            }
        }
        while (tempf != NULL)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->coefficient = tempf->coefficient;
            newnode->exponent = tempf->exponent;
            newnode->next = NULL;
            tempf = tempf->next;
            if (result == NULL)
                result = newnode;
            else
            {
                temp = result;
                while (temp->next != NULL)
                    temp = temp->next;
                temp->next = newnode;
            }
        }
        while (temps != NULL)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->coefficient = temps->coefficient;
            newnode->exponent = temps->exponent;
            newnode->next = NULL;
            temps = temps->next;
            if (result == NULL)
                result = newnode;
            else
            {
                temp = result;
                while (temp->next != NULL)
                    temp = temp->next;
                temp->next = newnode;
            }
        }
    }
    else
        printf("Any of the Polynomial is NULL!");
}

void DisplayPolynomial(struct node *head)
{
    struct node *temp = head;
    while (temp->next != NULL)
    // for (int i = 0; i < head->length - 1; i++)
    {
        printf("%dx^%d + ", temp->coefficient, temp->exponent);
        temp = temp->next;
    }
    printf("%dx^%d\n\n", temp->coefficient, temp->exponent);
}

void InsertPolynomial(int serial_no, int coef, int expo)
{
    struct node *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->coefficient = coef;
    newnode->exponent = expo;
    newnode->next = NULL;
    if (serial_no == 1)
    {
        if (first == NULL)
            first = newnode;
        else
        {
            temp = first;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
    else if (serial_no == 2)
    {
        if (second == NULL)
            second = newnode;
        else
        {
            temp = second;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
    }
    else
        printf("Can't be Added!");
    printf("New Node Added as %dx^%d\n", coef, expo);
}

void CreatePolynomial(int serial_no, int degree)
{
    int i, coef;
    for (i = degree; i >= 0; i--)
    {
        printf("Enter the Coefficient whose Degree is %d: ", i);
        scanf("%d", &coef);
        if (coef != 0)
            InsertPolynomial(serial_no, coef, i);
    }
}

void main()
{
    int deg;
    printf("Enter the Highest Degree for 1st Polynomial: ");
    scanf("%d", &deg);
    CreatePolynomial(1, deg);

    // MakeCircular(first);
    printf("First Polynomial Expression is: ");
    DisplayPolynomial(first);

    printf("Enter the Highest Degree for 2nd Polynomial: ");
    scanf("%d", &deg);
    CreatePolynomial(2, deg);

    // MakeCircular(second);
    printf("Second Polynomial Expression is: ");
    DisplayPolynomial(second);

    AdditionPolynomial();
    printf("Summing Up these two Polynomials are: ");
    DisplayPolynomial(result);
}
