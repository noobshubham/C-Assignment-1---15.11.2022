#include <stdio.h>

float* percentageAndAverage(float *p)
{
    static float arr[2], add = 0;
    add = *(p + 0) + *(p + 1) + *(p + 2);
    arr[0] = add / 3;
    arr[1] = (add / (90 * 3)) * 100;
    return &arr;
}

void main(){
    float sub[3];
    for(int i=0; i<3; i++){
        lab:
            printf("Enter the marks of subject (Out of 90) %d: ", i+1);
            scanf("%f", &sub[i]);
            if(sub[i]>90){
                printf("\nEntered number is more than 99\nTry Again\n");
                goto lab;
            }
    }
    float *p;
    p = percentageAndAverage(&sub);
    
    printf("\nAverage : %.2f and Percentage : %.2f", *(p), *(p + 1));
}
