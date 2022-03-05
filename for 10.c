#include<stdio.h>
#include<conio.h>
void main()
{
int x, y, z;

printf("Enter The Any Number \n");
scanf("%d",&x);
for(y=1;y<=x;y++)
{
for(z=1;z<=x-y+1;z++)

{
printf("%d",z);
}
printf("\n");}



getch();}