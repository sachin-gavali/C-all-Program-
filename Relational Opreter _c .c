#include<stdio.h>
#include<conio.h>


int main () 
{
int n;
clrscr ();
printf("\n Enter any number ");
scanf("%d",&n);

printf("\n (n<10) is  =%d",(n<10));
printf("\n (n>10) is  =%d",(n>10));
printf("\n (n<=10)is  =%d",(n<=10));
printf("\n (n==10)is  =%d",(n==10));
printf("\n (n!=10)is  =%d",(n!=10));
return 0;
}