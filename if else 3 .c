#include<stdio.h>

int main()
{int A;
    printf("Enter the value of A\n");
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
     return 0;
}