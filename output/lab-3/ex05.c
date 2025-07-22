#include <stdio.h>
int main()
{
    float height=0;
    float radius=0;
    float volume;
    float pi = 3.14;
    

    printf("Enter cone height");
    scanf("%f", &height);
    printf("Enter cone radius");
    scanf("%f", &radius);

    volume = 0.3333333*pi*radius*radius*height;
    printf("Cone volume = %.2f\n", volume);

    if(volume > 260){
        printf("This cone is perfect for Supun project");
    }
    else{
        printf("This cone is not fit for this project");
    };

    return 0;

}