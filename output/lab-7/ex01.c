#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    struct profile
    {
    char name[20];
    int age;
    float score;
    }s[3];
    for(i=0;i<3;i++)
    {
        printf("Student[%d]\n",i);
        printf("\t name");
        scanf("%s",s[i].name);
        printf("\t age");
        scanf("%d",&s[i].age);
        printf("\t score");
        scanf("%f",&s[i].score);
    }
    for(i=0;i<3;i++)
    printf("\nStudent %d'name: %s, age: %d\n", i,s[i].name, s[i].age);
    return 0;
}