int num1;
int num2;
#include<stdio.h>
#include<conio.h>
void main () 
{
void addition();
num1=10;
num2=20;

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
