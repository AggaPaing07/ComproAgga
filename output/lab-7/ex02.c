#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    int sco;
    char scoN[20];
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
    {
        if(s[i].score > sco)
        {
            sco = s[i].score;
            strcpy(scoN,s[i].name);
        }
    }
    printf("The heighest score belongs to %s", scoN);
    printf("at %d", sco);
    return 0;
}