#include <stdio.h>
int main()
{
    int num, i, count;
    int arr[num];
    printf("Enter number of elements: ");
    scanf("%d", &num);
    printf("Enter %d integers:", num);
    for (i=0;i<num;i++)
    {
        scanf("%d", &arr[i]);
    }
    int counted[num];
    for (i = 0; i<num; i++)
    {
        counted[i]=0;
    }
    for (i = 0; i<num; i++)
    {
        if (counted[i] == 1)
        {
            continue;
        }
        int count = 1;
        for (int j= i+1; j<num; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                counted[j] = 1;
            }
        }
        printf("Element %d occurs %d times\n", arr[i], count);
    }
    return 0;
}