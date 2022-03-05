// use of Go to Statement
#include<stdio.h>
#include<conio.h>
void main () ;
{
int a, b;
printf("Enter the Two numbers\n");
scanf("%d%d",&a,&b);
if(a>b)
goto big;
else
goto small;
big:printf ("Big value is %d\n", a);
goto stop;
small: printf ("small Value is %d\n",b);
goto stop;
stop: ;
getch();

}