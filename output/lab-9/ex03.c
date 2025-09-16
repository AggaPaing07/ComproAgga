#include <stdio.h>
#include <math.h>
float sum1(int r)
{
    int s1;
    s1 = r*r;
    return s1;
}
float sum2(int c)
{
    int s2;
    s2 = c*c;
    return s2;
}
/**float area(int r)
{
    float a;
    a = 3.14*r*r;
    return a;
}**/
int main()
{
    int c,r;
    int sum =0;
    printf("Enter the two integers: ");
    scanf("%d", &r);
    scanf("%d", &c);
    printf("%f\n", sum1(r));
    printf("%f\n", sum2(c));
    sum = sum1(r) + sum2(c);
    printf("%d", sum);
    
    return 0;

}