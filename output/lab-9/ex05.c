#include<stdio.h>
int i;
void sumeven(int arr[], int num2)
{
    int sumeven = 0;
    int sumodd = 0;

    for(i=0;i<num2;i++)
    {
        if(arr[i]%2==0)
        {
            sumeven+=arr[i];
        }
        else
        {
            sumodd+=arr[i];
        }
    }
    printf("output: Sum of even:%d\n", sumeven);
    printf("Sum of odd:%d\n", sumodd);
}
int main()
{
    int numbers[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&numbers[i]);
    }
    printf("Input");
    for(i=0;i<5;i++)
    {
        printf("%d",numbers[i]);
        if(i<4)
        {
            printf(",");
        }
    }
    printf("\n");
    sumeven(numbers,5);
    return 0;
}