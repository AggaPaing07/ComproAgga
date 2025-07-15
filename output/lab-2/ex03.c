#include <stdio.h>
int main()
{
    float point;
    int number1;
    int number2;
    char name1[20];
    char name2[20];
    char name3[20];

    printf("Enter your Name:");
    scanf("%s", name1);
    printf("Enter your Age:");
    scanf("%d", &number1);
    printf("Enter your height:");
    scanf("%f", &point);
    printf("Enter your weight:");
    scanf("%d", &number2);
    printf("Enter your gender:");
    scanf("%s", name2);
    printf("Enter your Education Qualification:");
    scanf("%s", name3);

    printf("Name:%s\t\t", name1);
    printf("Age:%d\t\t ", number1);
    printf("Gender:%s", name2);
    printf("\nHeight:%f\t", point);
    printf("Weight:%d", number2);
    printf("\nEducation:%s", name3);

    return 0;
}