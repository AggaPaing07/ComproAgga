#include <stdio.h>

int main()
{
    char ch1='H',ch2='I';
    //char Programming='KMITL';
    char name[20] = "KMITL";
    printf("%s\n",name);
    printf("%s\n",name);
    printf("%s\n",name);
    printf("%s\n",name);
    printf("%s\n",name);

    float point;
    char name1[20];
    printf("Enter your name:");
    scanf("%[^\n]",name1);
    printf("Enter your point:");
    scanf("%f",&point);

    printf("\n%s%s %f",name,name1,point);

    char a = 10;
    printf("\n%d", 10*2*3-10/7);
    printf("\n%d", a*2*(3-10)/7);
    printf("\n%d", a*2>2+3);
    printf("\n%d", a*5/3-a*13/(a++)-10);


    /*printf("%s\n","Programming");
    printf("%s\n","Programming");
    printf("%s\n","Programming");
    printf("%s\n","Programming");
    printf("%s\n","Programming");*/

    return 0;
}