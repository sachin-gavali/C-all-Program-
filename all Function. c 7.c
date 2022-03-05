void printline ();
void printing();
void printstar();
void age();
void large();
void arthmatic();
#include<stdio.h>
#include<conio.h>

void main ()
{
clrscr() ;

printline() ;

printf("\n Sachin Pandurang Gavali\n ");
printline() ;
printstar() ;
printing() ;
age();
large();
arthmatic(); 
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
void printing(void) 
{
printline();
printf("\n I'm BCs FY Student\n");
printline() ;
}
void age(void) 

{int A;
    printf(" \n Enter the value of A\n");
    scanf("%d",&A);
    if(A<10)
    {
    printf("The value of A is under 10 is  %d\n",A);
    }
   else if(A>10) 
    {
    printf("The value of A large form 10 is %d\n",A);}
   else 
{
printf("The value is equal %d\n",A);
}
    
}
void large(void) 
{
int a, b, c;
printf("\nEnter the Number A::");
scanf("%d",&a);
printf("\nEnter the Number B::");
scanf("%d",&b);
printf("\nEnter the Number C::");
scanf("%d",&c);

if(a>b)
       {
          if(a>c)
    {
    printf("The big number is A\n");
    }
          else
    {
    printf("The big Number is C\n");
    }
       }
else if(b>a)
     {
    if(b>c)
   {
       printf("The big Number is B\n");
    }
    else
    {
       printf("The big number is C\n");
    }
 
    
  
    }
    
    
    
    
   
}
void arthmatic(void) 
{
int a, b;
printf("\nEnter The value of A::");
scanf("%d",&a);
printf("\nEnter the value of B::");
scanf("%d",&b);

printf("sum of A & B=%d\n",a+b);
printf("sub of A & B=%d\n",a-b);
printf("Multi of A & B=%d\n",a*b);
printf("div of A & B=%d\n",a/b);
}

    