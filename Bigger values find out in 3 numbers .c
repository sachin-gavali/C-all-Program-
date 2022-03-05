#include<stdio.h>

int main()
{
int a, b, c;

    printf("Enter The value Of A ::\n");
    scanf("%d",&a);
    printf("Enter The value of B::\n");
    scanf("%d",&b);
    printf("Enter The value of C::\n");
    scanf("%d",&c);
    
    
    if(a>b)
     {
            if(a>c)
            {
            printf("\nThe Big value Is A:");
            }
            else{
            printf("\nThe Big Value is C:");}
            }
     else
    {
             if(b>c)
            {
            printf("\nThe big vale is B:");
            }
            else{
            printf("The big value is C:");
            }
    }
    
            
            
            
           
            
            
            
   return 0;

    
}