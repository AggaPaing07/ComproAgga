#include <stdio.h>
int main()
{
    int size = 6;
    int arr[] = {3,1,2,4,5,6};
    int *ptr = arr;
    int i;
    int sum =0;
    for(i=0;i<6;i++)
    {
        ptr = &arr[i];
        sum = sum +*ptr;
       // printf("Sum :%d\n", *ptr);
        
    }
    printf("Sum :%d\n", sum);
    return 0;
}