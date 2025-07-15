#include <stdio.h>
int main()
{
    float point;
    char name[20];
    int number;
    printf("Please enter an integer value: ");
    scanf("%d",&number );
    printf("You Entered:%d",number);
    printf("\nPlease enter a float value:"); 
    scanf("%f", &point);
    printf("You Entered:%f", point);
    printf("\nPlease enter a character:");
    scanf("%s", name);
    printf("You Entered:%s\n", name);

    return 0;
}