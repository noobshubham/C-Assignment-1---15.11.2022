#include <stdio.h>
#include <stdbool.h>

void circularShift(int *x, int *y, int *z){
    printf("\nBefore shift\nValue of x: %d\nValue of y: %d\nValue of z: %d\n", *x, *y, *z);
    int temp = *x;
    *x=*z;
    *z=*y;
    *y=temp;
    printf("\nAfter shift\nValue of x: %d\nValue of y: %d\nValue of z: %d\n", *x, *y, *z);
}

void main(){
    int x, y, z;
    bool continuous = true;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    printf("Enter value of z: ");
    scanf("%d", &z);
    while (continuous){
        printf("Enter your choice:\n1. Circular shift\t2.Exit");
        int ch;
        scanf("%d", &ch);
        switch (ch){
            case 1: 
                circularShift(&x, &y, &z); 
                break;
            case 2: 
                continuous = false;
                break;
            default: 
                printf("\nEnter correct choice\n");
        }
    }
}
