#include<stdio.h>
#include <conio.h>
int main() 
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
    return 0;
    
    
    
   
}