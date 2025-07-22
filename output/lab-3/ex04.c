#include <stdio.h>
int main()
{
    int Cscore = 0;
    int Pscore = 0;
    int Sscore = 0;
    char name[20];

    printf("Enter Your Name:");
    scanf("%c", name);
    printf("Enter your Calculus score:");
    scanf("%d", &Cscore);
    printf("Enter your Physic score:");
    scanf("%d", &Pscore);
    printf("Enter your Science score:");
    scanf("%d", &Sscore);

    float avg;
    avg = (Cscore+Pscore+Sscore)/3;

    if(avg >= 80){
        printf("%s, your average is %.2f. Your Grade is A", name, avg);
    }

    else if( avg <80 && avg >=70){
        printf("%s, your average is %.2f. Your Grade is B", name, avg);
    }

    else if(avg <70 && avg >=60){
        printf("%s, your average is %.2f. Your Grade is C", name, avg);
    }
    
    else if(avg<60 && avg>=50){
        printf("%s, your average is %.2f. Your Grade is D", name, avg);
    }

    else{
        printf("%s, your average is %.2f. Your Grade is F", name, avg);
    };

    return 0;
}