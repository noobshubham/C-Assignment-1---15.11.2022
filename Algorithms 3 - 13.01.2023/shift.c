#include <stdio.h>
#include <stdbool.h>

void circularShift(int *x, int *y, int *z){
    int temp = *x;
    *x=*z;
    *z=*y;
    *y=temp;
    printf("\nValue of x: %d\nValue of y: %d\nValue of z: %d\n", *x, *y, *z);
}

void main(){
    int x, y, z;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    printf("Enter value of z: ");
    scanf("%d", &z);
    circularShift(&x, &y, &z);
}
