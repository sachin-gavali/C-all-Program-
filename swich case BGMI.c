#include<stdio.h>
#include<conio.h>

int main()
{
    int x;

    printf("Enter The Value\n");
    scanf("%d",&x);
    switch(x) 
    {
    
    case 1:
    {
    printf("\t M416 \n");
    break;
    }
    case 2:
    {
    printf("\tAKM \n ");
    break;
    }
    case 3:
    {
    printf(" \tScarl\n ");
    break;
    }
    case 4:
    {
    printf("\tM762\n");
    break;
    }
    case 5:
    {
    printf("\tM249\n");
    break;
    }
    case 6:
    {
    printf("\tS762\n");
    break;
    }
    case 7:
    {
    printf("\AWM\n");
    }
    default:
    {
    printf(" \t You Choose 1to 7 Number \n");
    break;
    }
    
    }
    return 0;
}