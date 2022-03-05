#include<stdio.h>
#include<conio.h>
int main() 
{
int a =8 ;
clrscr();
a=(2<1) && (4<3);
printf("\n%d",a);

a=(2>1) && (4<3);
printf("\n%d",a);

a=(2<1) && (4>3);
printf("\n%d",a);

a=(2>1) && (4>3);
printf("\n%d",a);


a=(2<=1) && (4<=3);
printf("\n%d",a);

a=(2>=1) && (4>=3);
printf("\n%d",a);


return 0;
}
