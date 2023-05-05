#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coefficient;
    int exponent;
    struct node *next;
} *first = NULL, *second = NULL, *result = NULL;

void AdditionPolynomial()
{
    if (first != NULL && second != NULL)
    {
        struct node *temp, *tempf = first, *temps = second, *newnode;
        while (tempf != NULL && temps != NULL)
        {
            if (tempf->exponent == temps->exponent)
            {
                newnode = (struct node *)malloc(sizeof(struct node));
                newnode->coefficient = tempf->coefficient + temps->coefficient;
                newnode->exponent = tempf->exponent;
                newnode->next = NULL;
                if (result == NULL)
                    result = newnode;
                else
                {
                    temp = result;
                    while (temp->next != NULL)
                        temp = temp->next;
                    temp->next = newnode;
                }
                tempf = tempf->next;
                temps = temps->next;
            }
            else if (tempf->exponent > temps->exponent)
            {
                newnode = (struct node *)malloc(sizeof(struct node));
                newnode->coefficient = tempf->coefficient;
                newnode->exponent = tempf->exponent;
                newnode->next = NULL;
                if (result == NULL)
                    result = newnode;
                else
                {
                    temp = result;
                    while (temp->next != NULL)
                        temp = temp->next;
                    temp->next = newnode;
                }
                tempf = tempf->next;
            }
            else
            {
                newnode = (struct node *)malloc(sizeof(struct node));
                newnode->coefficient = temps->coefficient;
                newnode->exponent = temps->exponent;
                newnode->next = NULL;
                if (result == NULL)
                    result = newnode;
                else
                {
                    temp = result;
                    while (temp->next != NULL)
                        temp = temp->next;
                    temp->next = newnode;
                }
                temps = temps->next;
            }
        }
    }
    else
        printf("Any of the Polynomial is NULL!");
}

void InsertPolynomial(int seriel_no, int coefficient, int exponent)
{
    if (seriel_no == 1)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->coefficient = coefficient;
        newnode->exponent = exponent;
        newnode->next = NULL;
        if (first == NULL)
            first = newnode;
        else
        {
            struct node *temp = first;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
        printf("Added New Node as: %dx^%d\n", coefficient, exponent);
    }
    else if (seriel_no == 2)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->coefficient = coefficient;
        newnode->exponent = exponent;
        newnode->next = NULL;
        if (second == NULL)
            second = newnode;
        else
        {
            struct node *temp = second;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newnode;
        }
        printf("Added New Node as: %dx^%d\n", coefficient, exponent);
    }
    else
        printf("Can't Be Added!");
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

void DisplayPolynomial(struct node *temp)
{
    while (temp->next != NULL)
    {
        printf("%dx^%d + ", temp->coefficient, temp->exponent);
        temp = temp->next;
    }
    printf("%dx^%d\n\n", temp->coefficient, temp->exponent);
}

void main()
{
    int i, degree;
    printf("Enter the Highest Degree in 1st Polynomial: ");
    scanf("%d", &degree);
    CreatePolynomial(1, degree);

    printf("\nFirst Polynomial Expression is: ");
    DisplayPolynomial(first);

    printf("Enter the Highest Degree in 2nd Polynomial: ");
    scanf("%d", &degree);
    CreatePolynomial(2, degree);

    printf("\nSecond Polynomial Expression is: ");
    DisplayPolynomial(second);

    AdditionPolynomial();
    printf("The addition of these two Polynomials are: ");
    DisplayPolynomial(result);
}
