#include<stdio.h>
#include<math.h>
float area(float);
int main()
{
    float a, b, c, s;
    scanf("%f",&a);
   // printf("a:\n", a);
    scanf("%f",&b);
   // printf("b:\n", b);
    scanf("%f",&c);
   // printf("c:\n", c);
    s = (a+b+c)/2;
    float ans;
    ans = s*(s-a)*(s-b)*(s-c);
    return 0;
}

float area(float area1)
{
    //float a, b, c, s;
    //s = (a+b+c)/2;
    float an;
    an = sqrt(area1);
    
    return (an);
}