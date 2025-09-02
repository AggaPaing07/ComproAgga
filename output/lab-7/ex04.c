#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    float dx,dy;
    struct vector
    {
        float x,y;
    }v[4];
    for(i=0;i<2;i++)
    {
        //printf("%f:",x);
        scanf("%f", &v[i].x);
        scanf("%f", &v[i].y);
    }
    dx = (v[0].x+v[1].x);
    dy = (v[0].y+v[1].y);
    printf("The resultant vector is %.2fi + %.2fj", dx,dy);
    return 0;
}