void printline(); 
#include<stdio.h>
#include<conio.h>

void main ()
{
clrscr() ;
printline ();
printf("\n Sachin Pandurang Gavali \n");
printline () ;
getch() ;

}

void printline(void) 
{
int s;
for(s=1;s<30;s++)
{
printf("•");
}
}