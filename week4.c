#include <math.h>
#define _USE_MATH_DEFINES;
#include <stdio.h>
int main(){
    float radius;
    int length;
    float resist;
    float resistor;
    //double PI=M_PI;
    float area ;
    

    printf("Enter Radius of Resistor");
    scanf("%f", &radius);
    printf("Enter Length of Resistor");
    scanf("%d", &length);
    printf("Enter Resistivity of Resistor");
    scanf("%f", &resist);
    area = 3.14*(radius*radius);
    resistor = resist*length/area;


    printf("The value of  the Resistor %.2f OHM ", resistor);

    return 0;

}