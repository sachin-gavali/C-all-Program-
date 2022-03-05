#include<stdio.h>
int main() 
{
int reating;
printf("Enter your reating (1-5)");
scanf("%d",&reating);
switch(reating){

case 1:
printf("Your reating is 1\n",reating);
break;
case 2:
printf("Your reating is 2\n",reating);
break;
case 3:
printf("Your reating is 3\n",reating);
break;
case 4:
printf("Your reating is 4\n",reating);
break;
case 5:
printf("Your reating is 5\n",reating);
break;
default:
printf("Your reating is invalid \n",reating);
break;
}
return 0;
}
