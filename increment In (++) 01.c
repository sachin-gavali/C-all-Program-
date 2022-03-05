//assignment   Operator(=) 
#include<stdio.h>
#include<conio.h>
int main () 
{
int a=6, b;
clrscr();
b=++a;


printf("\n after the prefix increment:");
printf("a=%d && b=%d",a,b);
b=a++;
printf("\n After postfix Increment :");
printf("a=%d  b=%d",a,b);
return 0;
}