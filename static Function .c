//statics 
#include<stdio.h>
#include<conio.h>
void main() 
{
int x;
void increment (void);
for(x=1;x<=5;x++)
increment();
}
void increment (void) 
{
int count=0;
static int scount=0;
count++;
scount++;
printf("\n count=%d,\n scount=%d",count,scount);
}