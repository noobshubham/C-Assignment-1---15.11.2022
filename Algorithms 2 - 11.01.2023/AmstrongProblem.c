#include <stdio.h>

main(){
    for(int i = 2; i<500; i++){
        int j = amstrongh(i);
        if (j == 1)
        {
            printf("%d ", i);
        }
    }
}

int amstrongh(int a)
{
    int sum = 0, temp = a;
    while (a > 0)
    {
        int r = a % 10;
        sum += (r * r * r);
        a = a / 10;
    }
    if (temp == sum)
        return 1;
    else
        return 0;
}
