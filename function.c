/**#include<stdio.h>
//#include<conio.h>
void call_name (int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("\nAgga Paing\n");
}
int main()
{
    call_name(5);
    return 0;
}**/

#include<stdio.h>
#include<math.h>
#define PI 3.14
float deg_rad(float); /*Function Prototype*/
int main()
{
float deg,rad;
printf ("Enter Degree : ");
scanf ("%f",&deg);
rad = deg_rad(deg); //printf ("%f->%f\n",deg,rad);
printf ("sin(%.2f) = %.3f\n",deg,sin(rad));
printf ("cos(%.2f) = %.3f\n",deg,cos(rad));
printf ("tan(%.2f) = %.3f\n",deg,tan(rad));
return 0;
}
float deg_rad(float num)
{
float ans;
ans = num * PI / 180;
return(ans);
}