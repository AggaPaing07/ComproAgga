#include <stdio.h>
int main()
{
    int arr[5], i, j, tem;
    int *ptr = arr;
    printf("Enter 5 integers:\n");
    for(i=0; i<5; i++)
    
        scanf("%d", ptr + i);
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(*(ptr+j)>*(ptr+j+1))
            {
                tem = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = tem;
            }
        }
    }
    for(i=0;i<5;i++)
    
        printf("%d", *(ptr+i));
    
    return 0;
}