#include <stdio.h>
#include <math.h>

float* evaluate(float *p, float n){
    float sum=0,add=0;
    for(int i=0; i<n; i++){
        sum+= *(p+i);
    }
    static float f[2];
    f[1] = sum/n;
    for (int i = 0; i < n; i++){
        float t = (float)*(p + i) - f[1];
        if(t<0){
            t *= -1;
        }
        add += t*t;
    }
    f[0] += sqrt(add / (n - 1));
    return &f;
}
void main(){
    float ar[] = 
    int n = sizeof(ar)/sizeof(ar[0]);
    float *p;
    p = evaluate(&ar, n);
    printf("Standard Deviation : %.15f and Mean : %.15f\n", *p, *(p+1));
}
