void printline ();
void printstar();
#include<stdio.h>
#include<conio.h>

void main ()
{
clrscr() ;

printline() ;

printf("\n Sachin Pandurang Gavali\n ");
printline() ;
printstar() ;
getch() ;

}

void printline(void) 
{
int s;
for(s=1;s<15;s++)
{
printf("•");
}

}
void printstar(void)
 
{
printline() ;
printf("\n I'm form Rashin \n");
printline() ;

}