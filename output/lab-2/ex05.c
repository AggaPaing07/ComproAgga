#include <stdio.h>
int main()
{
    char name1[20];
    char name2[20];
    int age = 0;
    float height=0;

    printf("Enter your full name:");
    scanf("%[^\n]", name1);
    printf("Enter your age:");
    scanf("%d", &age);
    printf("Enter your height");
    scanf("%f", &height);
    printf("Enter you University name:");
    scanf("%s", name2);

    printf("Hi! Everyone. This is %s from %s. I am %d years old and my height is %.2f cm tall.", name1, name2, age, height );

    return 0;
}