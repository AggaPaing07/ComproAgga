#include <stdio.h>
#include <string.h>
int main()
{
    int i, totalM, totalS, total;
    struct data
    {
        int m,s;
    }ti[4];
for (i=0;i<3;i++)
{
    printf("Time %d input m: ",i);
    scanf("%d",&ti[i].m);
    printf("Time%d input s: ",i);
    scanf("%d", &ti[i].s);
}
totalM = (ti[0].m+ti[1].m+ti[2].m)*60;
totalS=ti[0].s+ti[1].s+ti[2].s;
total = totalM+totalS;
printf("%d",total);
return 0;
}