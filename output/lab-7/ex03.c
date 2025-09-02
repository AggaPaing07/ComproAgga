#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int i;
    float dis, disx, disy;
    
    struct dist
    {
        float x,y;
    }coodi[4];
    for (i=0;i<2;i++)
    {
        printf("x%d",i+1);
        scanf("%f",&coodi[i].x);
        printf("y%d",i+1);
        scanf("%f",&coodi[i].y);
    }
    disx = (coodi[0].x-coodi[1].x)*(coodi[0].x-coodi[1].x);
    disy = (coodi[0].y-coodi[1].y)*(coodi[0].y-coodi[1].y);
    dis = sqrtf(disx+disy);
    printf("The Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.3f units(s)", coodi[0].x,coodi[0].y,coodi[1].x,coodi[1].y, dis);
    return 0;
}