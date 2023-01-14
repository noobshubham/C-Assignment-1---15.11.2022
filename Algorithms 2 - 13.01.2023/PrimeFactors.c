#include <stdio.h>

//Prime factor

void main()
{
    int i,j,a=2;
    printf("Enter the number: \n");
    scanf("%d", &i);
    j=i;
    for(int a=2; a<=j; a++){
        if(j%a==0){
            int c=0;
            for(int b=2; b<=a; b++){
                if(b%a==0){
                    c++;
                    if(c==2){
                        break;
                    }
                }
            }
            if (c == 1)
            {
                printf("%d, ", a);
                j /= a;
                a = 1;
            }
        }
    }
}
