#include<stdio.h>
#include<conio.h>
int main() 
{
int s;
clrscr () ;
s=(2<1) && (4<3) ;

printf("\n (2<1)&& (4<3)=%d",s);
s =(2<1) &&  (4>3);
printf("\n (2<1) && (4>3)=%d",s);
s =(2>1)  &&   (4<3);
printf("\n (2>1) && (4<3)=%d",s);
s=(2>1)   &&    (4>3) ;
printf("\n (2>1)&& (4>3)=%d",s);
return 0;
}
