#include <stdint.h>
int main()
{
    
    int ID = 0;
    float pscore = 0;
    float comscore = 0;
    float cscore = 0;
    char name[20];

    printf("Enter your Name:");
    scanf("%s", name);
    printf("Enter your student ID:");
    scanf("%d", &ID);
    printf("Enter your Programming score:");
    scanf("%f", &comscore);
    printf("Enter your Physics score: ");
    scanf("%f", &pscore);
    printf("Enter your Calculus score:");
    scanf("%f", &cscore);

    float gpa = (comscore+pscore+cscore) / 3;
    printf("\nHi%s!(%d),Your GPA is %.2f", name, ID, gpa );




    return 0;
}