//Exturn
#include<stdio.h>
#include<conio.h>
 int n=5;

 void main () 
{
extern int n;
void display (void);
printf("%d\n",n);
display();

}
void display(void) 
{
extern int n;
int sum;
sum =n+n;
printf("%d+%d=%d\n",n,n,sum);
}