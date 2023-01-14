#include <stdio.h>
#include <stdlib.h>

int fabonacci(int lmt, int a, int b) {
    if(lmt == 0) {
        exit(0);
    }
    if(lmt ==25){
        printf("%d %d ", a, b);
        lmt-=2;
    }

    printf("%d ", a+b);

    int fab = fabonacci(--lmt, b, a+b);
    
    return fab;
}

void main(){
    printf("\n\nFibonacci serise of first 25 numbers:\n\n");
    fabonacci(25, 0, 1);
}
