#include <stdio.h>
int main(){
    int num1 = 0;
    int num2 = 0;

    printf("Enter a number:", num1);
    scanf("%d", &num1);
    printf("Enter a number:", num2);
    scanf("%d", &num2);

    if(num1==num2){
        printf("Match");
    }
    else
    {
         printf("Does Not Match. Try Again");
    };

    return 0;
}