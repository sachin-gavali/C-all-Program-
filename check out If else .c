#include<stdio.h>

void main()
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
            if(b>c)
            {
            printf("The Big value Is A::%d\n",a);
            }
            else{
            printf("The Small Value is A::%d\n",b);
            }
            
            
            
    else if(b>a)
            
            if(a>c){
            printf("The big value is B::%d\n",b);
            }
            else{
            printf("The small value is B::%d\n,"c);
            }
            
            
            
    else{
    printf("The Big value is C::%d\n",c);
    }
    
            
            
            
    getch () ;
    
}