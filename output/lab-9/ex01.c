#include <stdio.h>
#include <math.h>
#define PI = 3.14
float cir(int r)
{
    float c;
    c = 2*3.14*r;
    return c;
}
float area(int r)
{
    float a;
    a = 3.14*r*r;
    return a;
}
int main()
{
    int a,c;
    int r;
    printf("Enter value of radius:");
    scanf("%d", &r);
    printf("Circumference:%f\n", cir(r));
    printf("Area:%f", area(r));
    return 0;

}