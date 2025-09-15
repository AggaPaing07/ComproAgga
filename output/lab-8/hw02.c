#include <stdio.h>
int main()
{
    float x, y;
    scanf("%f",&x);
    scanf("%f",&y);
    float *ptr1, *ptr2;
    ptr1=&x;
    ptr2=&y;
    printf("Before Swap: x = %.2f, y = %.2f\n", *ptr1,*ptr2);
    printf("After swap: x = %.2f, y = %.2f\n", *ptr2,*ptr1);

    return 0;
}