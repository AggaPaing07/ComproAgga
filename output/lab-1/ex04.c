#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the first value\n");
    scanf("%f", &a);
    printf("Enter the second value\n");
    scanf("%f",&b);
    printf("Enter the thrid value\n");
    scanf("%f",&c);

    d = a+b+c;
    printf("%f + %f + %f = %f\n", a,b,c,d);


    return 0;
}