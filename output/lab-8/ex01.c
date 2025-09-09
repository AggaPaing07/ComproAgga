#include <stdio.h>
int main()
{
    int test =8;
    int *p;
    p = &test;
    printf("The address of %p variable is at:", &p);

    return 0;
}