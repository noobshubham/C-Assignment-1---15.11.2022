// code to find the greatest comman

#include<stdio.h>

int GCD(int n1, int n2) {
    if (n2 == 0) return n1;
    GCD(n2, n1 % n2);
}

void main() {
    printf("%d", GCD(60, 24));
}