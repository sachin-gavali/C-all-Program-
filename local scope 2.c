int num1=10;
int num2=20;
#include<stdio.h>
#include<conio.h>
void main () 
{
void addition();
int num1;
int num2;

printf("\n num1=%d, num2=%d\n",num1,num2);
addition();
getch();
}
void addition(void) 
{
int sum;
sum=num1+num2;
printf("in addition =%d",sum);
}
