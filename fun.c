#include<stdio.h>
void PrintHello( int );
int main()
{ int n;

printf("input number of Gino : ");
scanf("%d",&n);
PrintHello( n );
return 0;

}
void PrintHello( int i )
{ int count;
for ( count=1; count<=i ; count++ )
printf("%d Gino Dumbass\n",count);

}