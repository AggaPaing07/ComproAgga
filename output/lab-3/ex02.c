#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter a Number:");
    scanf("%d", &num);

    if(num>100){
        printf("%d is out of range");
    }

    else if(num %2==0){
        printf("%d is an even number");
    }

    else if(num %2!=0){
        printf("%d is an odd number");
    };

    return 0;
    


}