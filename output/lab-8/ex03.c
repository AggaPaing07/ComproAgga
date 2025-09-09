#include <stdio.h>
int main()
{
    int i;
    int array[] = {3,1,2,4,5,6};
    int n = sizeof(array)/sizeof(array[0]);
    int *ptr = array;
    //ptr = &array;
    int max = *ptr;
    for(i=1; i<n;i++)
    {
        ptr++;
        if(*ptr>max)
        {
            max=*ptr;
        }
    }
    printf("Maximun = %d\n", *ptr);
    return 0;
}