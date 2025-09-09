#include <stdio.h>
int main()
{
    int size = 6;
    int arr[] = {3,1,2,4,5,6};
    int *ptr = &arr[0];
    int i;
    for(i=0;i<6;i++)
    {
        ptr = &arr[i];
        printf("\nThe values: %d\n", *ptr);
    }
    return 0;
}