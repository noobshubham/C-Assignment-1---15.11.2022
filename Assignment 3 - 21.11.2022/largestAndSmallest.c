#include<stdio.h>
#include<conio.h>

void main(){
    int n=0,largest=0,smallest=0,ck=0;
    printf("Enter the number: \n");
    scanf("%d",&n);
    largest = smallest =n % 10;
    n=n/10;
    while(n>0){
        ck=n%10;
        printf("###start ck: %d L: %d S: %d \n",ck,largest,smallest);
        if(ck>largest){
            largest=ck;
            }
        else if(ck<smallest){
            smallest=ck;
            }
            printf("###ends ck: %d L: %d S: %d \n", ck, largest, smallest);
            n = n / 10;
    }
    printf("Largest: %d\nSmallest: %d",largest,smallest);
}
