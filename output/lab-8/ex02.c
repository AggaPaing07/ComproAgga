#include <stdio.h>
int main()
{
    int a =0;
    int b =5;
    int *ptr;
    ptr = &a;
    int *pt;
    pt = &b;

    printf("Before reverse: a = %d, b = %d", *ptr, *pt);
    printf("After reverse: a = %d, b = %d", *pt, *ptr);

    return 0;

}