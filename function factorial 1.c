#include<stdio.h>
#include<conio.h>
 
void main() 
{
int num;
int factorial(int n);
printf("Enter The Value Of Number \n");
scanf("%d",&num);
printf("in factorial=%d",num,factorial(num));
}
int factorial (int n) 
{
   if(n==1)
return (1);
else 
return(n*factorial (n-1));


}